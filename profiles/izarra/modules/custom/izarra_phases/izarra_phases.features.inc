<?php
/**
 * @file
 * izarra_phases.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function izarra_phases_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
