<?php
/**
 * @file
 * civihr_employee_portal_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function civihr_employee_portal_features_user_default_roles() {
  $roles = array();

  // Exported role: civihr_admin.
  $roles['civihr_admin'] = array(
    'name' => 'civihr_admin',
    'weight' => 3,
  );

  // Exported role: civihr_manager.
  $roles['civihr_manager'] = array(
    'name' => 'civihr_manager',
    'weight' => 5,
  );

  // Exported role: civihr_staff.
  $roles['civihr_staff'] = array(
    'name' => 'civihr_staff',
    'weight' => 4,
  );

  return $roles;
}
