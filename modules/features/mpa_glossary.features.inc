<?php
/**
 * @file
 * mpa_glossary.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mpa_glossary_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
