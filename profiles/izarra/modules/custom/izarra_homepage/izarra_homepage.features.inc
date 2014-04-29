<?php
/**
 * @file
 * izarra_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function izarra_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function izarra_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function izarra_homepage_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Home slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
