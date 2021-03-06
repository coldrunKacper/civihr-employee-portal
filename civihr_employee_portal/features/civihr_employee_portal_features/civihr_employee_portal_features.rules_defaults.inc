<?php
/**
 * @file
 * civihr_employee_portal_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function civihr_employee_portal_features_default_rules_configuration() {
  $items = array();
  $items['rules_absent_request_submit'] = entity_import('rules_config', '{ "rules_absent_request_submit" : {
      "LABEL" : "Absent request submit",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "civihr_employee_portal", "mimemail" ],
      "ON" : { "absence_request_add" : [] },
      "DO" : [
        { "_new_absence_request_action" : {
            "roles" : { "value" : { "3" : "3" } },
            "absence_type" : [ "absence-type" ],
            "absence_details" : "Thanks [current-user:name] Test message from rules\\r\\nYou have applied for -\\u003E [absence-type:value]\\r\\nMessage you inserted is -\\u003E [absence-details:value]",
            "form_values" : [ "form-values" ]
          }
        },
        { "mimemail" : {
            "key" : "email-absence-request",
            "to" : "[current-user:assigned_manager_email]",
            "from_name" : "[current-user:name]",
            "from_mail" : "[current-user:mail]",
            "subject" : "CiviHR - Absence Request!",
            "body" : "\\u003Cbody bgcolor=\\u0022#FFFFFF\\u0022\\u003E\\r\\n\\u003Ctable class=\\u0022head-wrap\\u0022 bgcolor=\\u0022#999999\\u0022\\u003E\\r\\n    \\u003Ctr\\u003E\\r\\n        \\u003Ctd\\u003E\\u003C\\/td\\u003E\\r\\n        \\u003Ctd class=\\u0022header container\\u0022\\u003E\\r\\n            \\u003Cdiv class=\\u0022content\\u0022\\u003E\\r\\n                \\u003Ctable bgcolor=\\u0022#999999\\u0022\\u003E\\r\\n                    \\u003Ctr\\u003E\\r\\n                        \\u003Ctd\\u003E\\u003Cimg src=\\u0022http:\\/\\/placehold.it\\/100x40\\/\\u0022\\/\\u003E\\u003C\\/td\\u003E\\r\\n                        \\u003Ctd align=\\u0022right\\u0022\\u003E\\u003Ch6 class=\\u0022collapse\\u0022\\u003ECiviHR\\u003C\\/h6\\u003E\\u003C\\/td\\u003E\\r\\n                    \\u003C\\/tr\\u003E\\r\\n                \\u003C\\/table\\u003E\\r\\n            \\u003C\\/div\\u003E\\r\\n        \\u003C\\/td\\u003E\\r\\n        \\u003Ctd\\u003E\\u003C\\/td\\u003E\\r\\n    \\u003C\\/tr\\u003E\\r\\n\\u003C\\/table\\u003E\\r\\n\\r\\n\\u003Ctable class=\\u0022body-wrap\\u0022\\u003E\\r\\n    \\u003Ctr\\u003E\\r\\n        \\u003Ctd\\u003E\\u003C\\/td\\u003E\\r\\n        \\u003Ctd class=\\u0022container\\u0022 bgcolor=\\u0022#FFFFFF\\u0022\\u003E\\r\\n            \\u003Cdiv class=\\u0022content\\u0022\\u003E\\r\\n                \\u003Ctable\\u003E\\r\\n                    \\u003Ctr\\u003E\\r\\n                        \\u003Ctd\\u003E\\r\\n                            \\u003Ch3\\u003EDear, [current-user:assigned_manager_name]\\u003C\\/h3\\u003E\\r\\n                            \\u003Cp class=\\u0022lead\\u0022\\u003EEmployee [current-user:contact_display_name] has \\u003Cb\\u003Erequested\\u003C\\/b\\u003E leave!\\u003C\\/p\\u003E\\r\\n                            \\u003Cp\\u003E\\r\\n                                Leave Type: [leave-type:value] \\u003Cbr \\/\\u003E\\r\\n                                Leave Date: [leave-date:value] \\u003Cbr \\/\\u003E\\r\\n                            \\u003C\\/p\\u003E\\r\\n\\r\\n                            \\u003Cp class=\\u0022callout\\u0022\\u003E\\r\\n                                \\u003Cb\\u003EStaff notes:\\u003C\\/b\\u003E \\u003Cbr \\/\\u003E\\r\\n                                [absence-details:value]\\r\\n                            \\u003C\\/p\\u003E\\r\\n\\r\\n                            \\u003Ctable class=\\u0022social\\u0022 width=\\u0022100%\\u0022\\u003E\\r\\n                                \\u003Ctr\\u003E\\r\\n                                    \\u003Ctd\\u003E\\r\\n\\r\\n                                        \\u003Ctable align=\\u0022left\\u0022 class=\\u0022column\\u0022\\u003E\\r\\n                                            \\u003Ctr\\u003E\\r\\n                                                \\u003Ctd\\u003E\\r\\n                                                    \\u003Ch5 class=\\u0022\\u0022\\u003EManage the request here:\\u003C\\/h5\\u003E\\r\\n                                                    \\u003Cp class=\\u0022\\u0022\\u003E\\r\\n                                                        \\u003Ca href=\\u0022[site:url]\\u0022 class=\\u0022soc-btn gp\\u0022\\u003ESelf Service Portal\\u003C\\/a\\u003E\\r\\n                                                    \\u003C\\/p\\u003E\\r\\n                                                \\u003C\\/td\\u003E\\r\\n                                            \\u003C\\/tr\\u003E\\r\\n                                        \\u003C\\/table\\u003E\\r\\n\\r\\n                                        \\u003Ctable align=\\u0022left\\u0022 class=\\u0022column\\u0022\\u003E\\r\\n                                            \\u003Ctr\\u003E\\r\\n                                                \\u003Ctd\\u003E\\r\\n                                                    \\u003Ch5 class=\\u0022\\u0022\\u003EStaff details:\\u003C\\/h5\\u003E\\r\\n                                                    \\u003Cp\\u003EName: \\u003Cstrong\\u003E[current-user:contact_display_name]\\u003C\\/strong\\u003E \\u003Cbr \\/\\u003E\\r\\n                                                        Phone: \\u003Cstrong\\u003E[current-user:contact_phone]\\u003C\\/strong\\u003E \\u003Cbr \\/\\u003E\\r\\n                                                        Email: \\u003Cstrong\\u003E\\u003Ca href=\\u0022mailto:[current-user:mail]\\u0022\\u003E\\u003Cspan class=\\u0022__cf_email__\\u0022\\u003E[current-user:mail]\\u003C\\/span\\u003E\\u003C\\/a\\u003E\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n                                                \\u003C\\/td\\u003E\\r\\n                                            \\u003C\\/tr\\u003E\\r\\n                                        \\u003C\\/table\\u003E\\r\\n                                        \\u003Cspan class=\\u0022clear\\u0022\\u003E\\u003C\\/span\\u003E\\r\\n                                    \\u003C\\/td\\u003E\\r\\n                                \\u003C\\/tr\\u003E\\r\\n                            \\u003C\\/table\\u003E\\r\\n                        \\u003C\\/td\\u003E\\r\\n                    \\u003C\\/tr\\u003E\\r\\n                \\u003C\\/table\\u003E\\r\\n            \\u003C\\/div\\u003E\\r\\n        \\u003C\\/td\\u003E\\r\\n        \\u003Ctd\\u003E\\u003C\\/td\\u003E\\r\\n    \\u003C\\/tr\\u003E\\r\\n\\u003C\\/table\\u003E\\r\\n\\r\\n\\u003C\\/body\\u003E",
            "plaintext" : "Dear, [current-user:assigned_manager_name]\\r\\n\\r\\nEmployee [current-user:contact_display_name] has requested leave!\\r\\n\\r\\nLeave Type: [leave-type:value]\\r\\nLeave Date: [leave-date:value]\\r\\n\\r\\nStaff notes:\\r\\n[absence-details:value]\\r\\n\\r\\nManage the request here: [site:url]\\r\\n\\r\\nStaff details:\\r\\nName: [current-user:contact_display_name]\\r\\nPhone: [current-user:contact_phone]\\r\\nEmail: [current-user:mail]",
            "language" : [ "current-user:language" ]
          }
        },
        { "drupal_message" : {
            "message" : "Absence request of type: [absence-type:value] submitted for approval\\r\\nDetails: [absence-details:value]",
            "repeat" : 0
          }
        }
      ]
    }
  }');
  $items['rules_reject_all_absence'] = entity_import('rules_config', '{ "rules_reject_all_absence" : {
      "LABEL" : "Reject All absence",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail", "civihr_employee_portal" ],
      "ON" : { "reject_all_post_event" : [] },
      "DO" : [
        { "mimemail" : {
            "key" : "reject-all-absence",
            "to" : "[target-user:mail]",
            "from_name" : "[current-user:name]",
            "from_mail" : "[current-user:mail]",
            "subject" : "CiviHR - Rejected Absence",
            "body" : "\\u003Cbody bgcolor=\\u0022#FFFFFF\\u0022\\u003E\\r\\n\\u003Ctable class=\\u0022head-wrap\\u0022 bgcolor=\\u0022#999999\\u0022\\u003E\\r\\n    \\u003Ctr\\u003E\\r\\n        \\u003Ctd\\u003E\\u003C\\/td\\u003E\\r\\n        \\u003Ctd class=\\u0022header container\\u0022\\u003E\\r\\n            \\u003Cdiv class=\\u0022content\\u0022\\u003E\\r\\n                \\u003Ctable bgcolor=\\u0022#999999\\u0022\\u003E\\r\\n                    \\u003Ctr\\u003E\\r\\n                        \\u003Ctd\\u003E\\u003Cimg src=\\u0022http:\\/\\/placehold.it\\/100x40\\/\\u0022\\/\\u003E\\u003C\\/td\\u003E\\r\\n                        \\u003Ctd align=\\u0022right\\u0022\\u003E\\u003Ch6 class=\\u0022collapse\\u0022\\u003ECiviHR\\u003C\\/h6\\u003E\\u003C\\/td\\u003E\\r\\n                    \\u003C\\/tr\\u003E\\r\\n                \\u003C\\/table\\u003E\\r\\n            \\u003C\\/div\\u003E\\r\\n        \\u003C\\/td\\u003E\\r\\n        \\u003Ctd\\u003E\\u003C\\/td\\u003E\\r\\n    \\u003C\\/tr\\u003E\\r\\n\\u003C\\/table\\u003E\\r\\n\\r\\n\\u003Ctable class=\\u0022body-wrap\\u0022\\u003E\\r\\n    \\u003Ctr\\u003E\\r\\n        \\u003Ctd\\u003E\\u003C\\/td\\u003E\\r\\n        \\u003Ctd class=\\u0022container\\u0022 bgcolor=\\u0022#FFFFFF\\u0022\\u003E\\r\\n            \\u003Cdiv class=\\u0022content\\u0022\\u003E\\r\\n                \\u003Ctable\\u003E\\r\\n                    \\u003Ctr\\u003E\\r\\n                        \\u003Ctd\\u003E\\r\\n                            \\u003Ch3\\u003EDear, [target-user:contact_display_name]\\u003C\\/h3\\u003E\\r\\n                            \\u003Cp class=\\u0022lead\\u0022\\u003EYour leave has been \\u003Cb\\u003Erejected!\\u003C\\/b\\u003E\\u003C\\/p\\u003E\\r\\n                            \\u003Cp\\u003E\\r\\n                                Leave Type: [leave-type:value] \\u003Cbr \\/\\u003E\\r\\n                                Leave Date: [leave-date:value] \\u003Cbr \\/\\u003E\\r\\n                            \\u003C\\/p\\u003E\\r\\n\\r\\n                            \\u003Cp class=\\u0022callout\\u0022\\u003E\\r\\n                                \\u003Cb\\u003EManager notes:\\u003C\\/b\\u003E \\u003Cbr \\/\\u003E\\r\\n                                [manager-notes:value]\\r\\n                            \\u003C\\/p\\u003E\\r\\n\\r\\n                            \\u003Ctable class=\\u0022social\\u0022 width=\\u0022100%\\u0022\\u003E\\r\\n                                \\u003Ctr\\u003E\\r\\n                                    \\u003Ctd\\u003E\\r\\n\\r\\n                                        \\u003Ctable align=\\u0022left\\u0022 class=\\u0022column\\u0022\\u003E\\r\\n                                            \\u003Ctr\\u003E\\r\\n                                                \\u003Ctd\\u003E\\r\\n                                                    \\u003Ch5 class=\\u0022\\u0022\\u003ECheck your request here:\\u003C\\/h5\\u003E\\r\\n                                                    \\u003Cp class=\\u0022\\u0022\\u003E\\r\\n                                                        \\u003Ca href=\\u0022[site:url]\\u0022 class=\\u0022soc-btn gp\\u0022\\u003ESelf Service Portal\\u003C\\/a\\u003E\\r\\n                                                    \\u003C\\/p\\u003E\\r\\n                                                \\u003C\\/td\\u003E\\r\\n                                            \\u003C\\/tr\\u003E\\r\\n                                        \\u003C\\/table\\u003E\\r\\n\\r\\n                                        \\u003Ctable align=\\u0022left\\u0022 class=\\u0022column\\u0022\\u003E\\r\\n                                            \\u003Ctr\\u003E\\r\\n                                                \\u003Ctd\\u003E\\r\\n                                                    \\u003Ch5 class=\\u0022\\u0022\\u003EYour Manager details:\\u003C\\/h5\\u003E\\r\\n                                                    \\u003Cp\\u003EName: \\u003Cstrong\\u003E[target-user:assigned_manager_name]\\u003C\\/strong\\u003E\\r\\n                                                        Phone: \\u003Cstrong\\u003E[target-user:assigned_manager_phone]\\u003C\\/strong\\u003E \\u003Cbr \\/\\u003E\\r\\n                                                        Email: \\u003Cstrong\\u003E\\u003Ca href=\\u0022mailto:[target-user:assigned_manager_email]\\u0022\\u003E\\u003Cspan class=\\u0022__cf_email__\\u0022\\u003E[target-user:assigned_manager_email]\\u003C\\/span\\u003E\\u003C\\/a\\u003E\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n                                                \\u003C\\/td\\u003E\\r\\n                                            \\u003C\\/tr\\u003E\\r\\n                                        \\u003C\\/table\\u003E\\r\\n                                        \\u003Cspan class=\\u0022clear\\u0022\\u003E\\u003C\\/span\\u003E\\r\\n                                    \\u003C\\/td\\u003E\\r\\n                                \\u003C\\/tr\\u003E\\r\\n                            \\u003C\\/table\\u003E\\r\\n                        \\u003C\\/td\\u003E\\r\\n                    \\u003C\\/tr\\u003E\\r\\n                \\u003C\\/table\\u003E\\r\\n            \\u003C\\/div\\u003E\\r\\n        \\u003C\\/td\\u003E\\r\\n        \\u003Ctd\\u003E\\u003C\\/td\\u003E\\r\\n    \\u003C\\/tr\\u003E\\r\\n\\u003C\\/table\\u003E\\r\\n\\r\\n\\u003C\\/body\\u003E",
            "plaintext" : "Dear, [target-user:contact_display_name]\\r\\n\\r\\nYour leave has been rejected!\\r\\n\\r\\nLeave Type: [leave-type:value]\\r\\nLeave Date: [leave-date:value]\\r\\n\\r\\nManager notes:\\r\\n[manager-notes:value]\\r\\n\\r\\nCheck your request here: [site:url]\\r\\n\\r\\nYour Manager details:\\r\\nName: [target-user:assigned_manager_name]\\r\\nPhone: [target-user:assigned_manager_phone]\\r\\nEmail: [target-user:assigned_manager_email]",
            "language" : [ "current-user:language" ]
          }
        },
        { "drupal_message" : {
            "message" : "Leave successfully rejected for the whole duration! \\r\\nCurrent user\\u0027s manager name: [current-user:assigned_manager_name]\\r\\nTarget user\\u0027s email and manager name: [target-user:mail] + [target-user:assigned_manager_name]\\r\\n",
            "repeat" : "0"
          }
        }
      ]
    }
  }');
  return $items;
}
