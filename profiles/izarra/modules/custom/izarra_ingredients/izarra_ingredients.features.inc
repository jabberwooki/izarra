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
