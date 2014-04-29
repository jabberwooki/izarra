<?php
/**
 * @file
 * izarra_cocktails.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function izarra_cocktails_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function izarra_cocktails_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_custom_pagers().
 */
function izarra_cocktails_default_custom_pagers() {
  $custom_pagers = array();

  $custom_pagers[] = array(
    'pid' => 3,
    'title' => 'Cocktails',
    'list_php' => '',
    'view' => 'cocktails',
    'args' => '[node:field_cocktail_type]',
    'position' => 'block',
    'visibility_php' => '',
    'node_type' => 'cocktail',
    'reverse_list' => 0,
  );
  return $custom_pagers;
}

/**
 * Implements hook_node_info().
 */
function izarra_cocktails_node_info() {
  $items = array(
    'cocktail' => array(
      'name' => t('Cocktail'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
