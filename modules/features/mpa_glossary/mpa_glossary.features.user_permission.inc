<?php
/**
 * @file
 * mpa_glossary.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mpa_glossary_user_default_permissions() {
  $permissions = array();

  // Exported permission: access lexicon.
  $permissions['access lexicon'] = array(
    'name' => 'access lexicon',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'lexicon',
  );

  return $permissions;
}
