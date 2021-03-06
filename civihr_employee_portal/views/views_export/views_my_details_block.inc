<?php

/**
 * Exported my_details_block view
 */

$view = new view();
$view->name = 'my_details_block';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'civicrm_contact';
$view->human_name = 'My details block';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'My details block';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
    4 => '4',
    6 => '6',
    5 => '5',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: CiviCRM Contacts: Drupal ID */
$handler->display->display_options['relationships']['drupal_id']['id'] = 'drupal_id';
$handler->display->display_options['relationships']['drupal_id']['table'] = 'civicrm_contact';
$handler->display->display_options['relationships']['drupal_id']['field'] = 'drupal_id';
/* Relationship: CiviCRM Contacts: HRJobContract Details entity */
$handler->display->display_options['relationships']['hrjc_details']['id'] = 'hrjc_details';
$handler->display->display_options['relationships']['hrjc_details']['table'] = 'civicrm_contact';
$handler->display->display_options['relationships']['hrjc_details']['field'] = 'hrjc_details';
$handler->display->display_options['relationships']['hrjc_details']['relationship'] = 'drupal_id';
/* Field: CiviCRM Contacts: Contact ID */
$handler->display->display_options['fields']['id']['id'] = 'id';
$handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
$handler->display->display_options['fields']['id']['field'] = 'id';
/* Field: CiviCRM Contacts: Display Name */
$handler->display->display_options['fields']['display_name']['id'] = 'display_name';
$handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
$handler->display->display_options['fields']['display_name']['field'] = 'display_name';
$handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 0;
/* Field: CiviCRM Custom: Emergency Contacts: Name */
$handler->display->display_options['fields']['name_80']['id'] = 'name_80';
$handler->display->display_options['fields']['name_80']['table'] = 'civicrm_value_emergency_contacts_21';
$handler->display->display_options['fields']['name_80']['field'] = 'name_80';
$handler->display->display_options['fields']['name_80']['label'] = 'Emergency Contact';
/* Filter criterion: User: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'drupal_id';
$handler->display->display_options['filters']['uid_current']['value'] = '1';

/* Display: My details */
$handler = $view->new_display('block', 'My details', 'my_details_block');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: CiviCRM Contacts: Drupal ID */
$handler->display->display_options['relationships']['drupal_id']['id'] = 'drupal_id';
$handler->display->display_options['relationships']['drupal_id']['table'] = 'civicrm_contact';
$handler->display->display_options['relationships']['drupal_id']['field'] = 'drupal_id';
/* Relationship: CiviCRM Contacts: HRJobContract Details entity */
$handler->display->display_options['relationships']['hrjc_details']['id'] = 'hrjc_details';
$handler->display->display_options['relationships']['hrjc_details']['table'] = 'civicrm_contact';
$handler->display->display_options['relationships']['hrjc_details']['field'] = 'hrjc_details';
$handler->display->display_options['relationships']['hrjc_details']['relationship'] = 'drupal_id';
/* Relationship: CiviCRM Contacts: HRJobContract Role entity */
$handler->display->display_options['relationships']['hrjc_role']['id'] = 'hrjc_role';
$handler->display->display_options['relationships']['hrjc_role']['table'] = 'civicrm_contact';
$handler->display->display_options['relationships']['hrjc_role']['field'] = 'hrjc_role';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: CiviCRM Contacts: Contact ID */
$handler->display->display_options['fields']['id']['id'] = 'id';
$handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
$handler->display->display_options['fields']['id']['field'] = 'id';
$handler->display->display_options['fields']['id']['exclude'] = TRUE;
$handler->display->display_options['fields']['id']['separator'] = '';
/* Field: CiviCRM Contacts: Display Name */
$handler->display->display_options['fields']['display_name']['id'] = 'display_name';
$handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
$handler->display->display_options['fields']['display_name']['field'] = 'display_name';
$handler->display->display_options['fields']['display_name']['label'] = 'Name';
$handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 0;
/* Field: HRJobContract Details entity: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'hrjc_details';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'hrjc_details';
$handler->display->display_options['fields']['title']['label'] = 'Designation';
/* Field: HRJobContract Details entity: Location */
$handler->display->display_options['fields']['location']['id'] = 'location';
$handler->display->display_options['fields']['location']['table'] = 'hrjc_details';
$handler->display->display_options['fields']['location']['field'] = 'location';
$handler->display->display_options['fields']['location']['relationship'] = 'hrjc_details';
/* Field: HRJobContract Role entity: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'hrjc_role';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'hrjc_role';
$handler->display->display_options['fields']['title_1']['label'] = 'Role title';
/* Field: HRJobContract Role entity: Department */
$handler->display->display_options['fields']['department']['id'] = 'department';
$handler->display->display_options['fields']['department']['table'] = 'hrjc_role';
$handler->display->display_options['fields']['department']['field'] = 'department';
$handler->display->display_options['fields']['department']['relationship'] = 'hrjc_role';
$handler->display->display_options['fields']['department']['label'] = 'Role Department';
/* Field: CiviCRM Custom: Emergency Contacts: Name */
$handler->display->display_options['fields']['name_80']['id'] = 'name_80';
$handler->display->display_options['fields']['name_80']['table'] = 'civicrm_value_emergency_contacts_21';
$handler->display->display_options['fields']['name_80']['field'] = 'name_80';
$handler->display->display_options['fields']['name_80']['label'] = 'Emergency Contact';

/* Display: My address */
$handler = $view->new_display('block', 'My address', 'my_address_block');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'My address block';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: CiviCRM Contacts: Drupal ID */
$handler->display->display_options['relationships']['drupal_id']['id'] = 'drupal_id';
$handler->display->display_options['relationships']['drupal_id']['table'] = 'civicrm_contact';
$handler->display->display_options['relationships']['drupal_id']['field'] = 'drupal_id';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: CiviCRM Phone Details: Phone Number */
$handler->display->display_options['fields']['phone']['id'] = 'phone';
$handler->display->display_options['fields']['phone']['table'] = 'civicrm_phone';
$handler->display->display_options['fields']['phone']['field'] = 'phone';
$handler->display->display_options['fields']['phone']['relationship'] = 'drupal_id';
$handler->display->display_options['fields']['phone']['label'] = 'Primary Phone';
$handler->display->display_options['fields']['phone']['location_type'] = '1';
$handler->display->display_options['fields']['phone']['location_op'] = '1';
$handler->display->display_options['fields']['phone']['is_primary'] = 0;
$handler->display->display_options['fields']['phone']['phone_type'] = '1';
/* Field: CiviCRM Email: Email Address */
$handler->display->display_options['fields']['email']['id'] = 'email';
$handler->display->display_options['fields']['email']['table'] = 'civicrm_email';
$handler->display->display_options['fields']['email']['field'] = 'email';
$handler->display->display_options['fields']['email']['label'] = 'Primary Email';
$handler->display->display_options['fields']['email']['location_type'] = '0';
$handler->display->display_options['fields']['email']['location_op'] = '1';
$handler->display->display_options['fields']['email']['is_primary'] = 1;
/* Field: CiviCRM Address: Full Street Address */
$handler->display->display_options['fields']['street_address']['id'] = 'street_address';
$handler->display->display_options['fields']['street_address']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['street_address']['field'] = 'street_address';
$handler->display->display_options['fields']['street_address']['relationship'] = 'drupal_id';
$handler->display->display_options['fields']['street_address']['label'] = 'Address';
$handler->display->display_options['fields']['street_address']['location_type'] = '0';
$handler->display->display_options['fields']['street_address']['location_op'] = '0';
$handler->display->display_options['fields']['street_address']['is_primary'] = 0;
$handler->display->display_options['fields']['street_address']['is_billing'] = 0;
/* Field: CiviCRM Address: Supplemental Street Address */
$handler->display->display_options['fields']['supplemental_address_1']['id'] = 'supplemental_address_1';
$handler->display->display_options['fields']['supplemental_address_1']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['supplemental_address_1']['field'] = 'supplemental_address_1';
$handler->display->display_options['fields']['supplemental_address_1']['relationship'] = 'drupal_id';
$handler->display->display_options['fields']['supplemental_address_1']['label'] = '';
$handler->display->display_options['fields']['supplemental_address_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['supplemental_address_1']['location_type'] = '0';
$handler->display->display_options['fields']['supplemental_address_1']['location_op'] = '0';
$handler->display->display_options['fields']['supplemental_address_1']['is_primary'] = 0;
$handler->display->display_options['fields']['supplemental_address_1']['is_billing'] = 0;
/* Field: CiviCRM Address: City / Suburb */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['city']['field'] = 'city';
$handler->display->display_options['fields']['city']['relationship'] = 'drupal_id';
$handler->display->display_options['fields']['city']['location_type'] = '0';
$handler->display->display_options['fields']['city']['location_op'] = '0';
$handler->display->display_options['fields']['city']['is_primary'] = 0;
$handler->display->display_options['fields']['city']['is_billing'] = 0;
/* Field: CiviCRM Address: ZIP / Postal Code */
$handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['relationship'] = 'drupal_id';
$handler->display->display_options['fields']['postal_code']['location_type'] = '0';
$handler->display->display_options['fields']['postal_code']['location_op'] = '0';
$handler->display->display_options['fields']['postal_code']['is_primary'] = 0;
$handler->display->display_options['fields']['postal_code']['is_billing'] = 0;
/* Field: CiviCRM Address: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['fields']['country']['location_type'] = '0';
$handler->display->display_options['fields']['country']['location_op'] = '0';
$handler->display->display_options['fields']['country']['is_primary'] = 0;
$handler->display->display_options['fields']['country']['is_billing'] = 0;
$translatables['my_details_block'] = array(
    t('Master'),
    t('My details block'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Drupal User'),
    t('HRJobContract Details entity'),
    t('Contact ID'),
    t('.'),
    t(','),
    t('Display Name'),
    t('Emergency Contact'),
    t('My details'),
    t('HRJobContract Role entity'),
    t('Name'),
    t('Designation'),
    t('Location'),
    t('Role title'),
    t('Role Department'),
    t('My address'),
    t('My address block'),
    t('Primary Phone'),
    t('Primary Email'),
    t('Address'),
    t('City / Suburb'),
    t('ZIP / Postal Code'),
    t('Country'),
);