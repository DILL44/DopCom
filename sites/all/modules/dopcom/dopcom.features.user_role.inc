<?php
/**
 * @file
 * dopcom.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dopcom_user_default_roles() {
  $roles = array();

  // Exported role: adhérent.
  $roles['adhérent'] = array(
    'name' => 'adhérent',
    'weight' => '2',
  );

  // Exported role: adhérent actif.
  $roles['adhérent actif'] = array(
    'name' => 'adhérent actif',
    'weight' => '3',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '4',
  );

  return $roles;
}
