<?php
/**
 * @file
 * mpa_job.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function mpa_job_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:cohort:update field_job_title field'
  $permissions['node:cohort:update field_job_title field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cohort:view field_job_title field'
  $permissions['node:cohort:view field_job_title field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_job_title field'
  $permissions['node:group:update field_job_title field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:view field_job_title field'
  $permissions['node:group:view field_job_title field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
