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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function izarra_phases_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function izarra_phases_node_info() {
  $items = array(
    'phase' => array(
      'name' => t('Phase d\'élaboration'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
