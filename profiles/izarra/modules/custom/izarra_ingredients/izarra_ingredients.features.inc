<?php
/**
 * @file
 * izarra_ingredients.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function izarra_ingredients_ctools_plugin_api($module = NULL, $api = NULL) {
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
function izarra_ingredients_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_custom_pagers().
 */
function izarra_ingredients_default_custom_pagers() {
  $custom_pagers = array();

  $custom_pagers[] = array(
    'pid' => 1,
    'title' => 'Ingredients',
    'list_php' => '',
    'view' => 'ingredients',
    'args' => '',
    'position' => 'block',
    'visibility_php' => '',
    'node_type' => 'ingredients',
    'reverse_list' => 0,
  );
  return $custom_pagers;
}

/**
 * Implements hook_node_info().
 */
function izarra_ingredients_node_info() {
  $items = array(
    'ingredients' => array(
      'name' => t('Ingredients'),
      'base' => 'node_content',
      'description' => t('Plantes et fruits entrant dans l\'élaboration des liqueurs.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
