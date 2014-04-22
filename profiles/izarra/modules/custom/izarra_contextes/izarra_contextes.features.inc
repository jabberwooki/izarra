<?php
/**
 * @file
 * izarra_contextes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function izarra_contextes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
