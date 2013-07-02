<?php
/**
 * @file
 * mpa_job.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mpa_job_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mpa_job_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mpa_job_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => t('Job advertisment'),
      'has_title' => '1',
      'title_label' => t('Job title'),
      'help' => '',
    ),
  );
  return $items;
}
