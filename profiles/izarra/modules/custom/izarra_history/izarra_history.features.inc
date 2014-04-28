<?php
/**
 * @file
 * izarra_history.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function izarra_history_ctools_plugin_api($module = NULL, $api = NULL) {
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
function izarra_history_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function izarra_history_node_info() {
  $items = array(
    'historical_fact' => array(
      'name' => t('Historical fact'),
      'base' => 'node_content',
      'description' => t('Un fait, retraçant l\'histoire de Izarra au cours du temps.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
