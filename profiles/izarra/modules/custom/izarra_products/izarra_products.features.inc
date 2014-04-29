<?php
/**
 * @file
 * izarra_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function izarra_products_ctools_plugin_api($module = NULL, $api = NULL) {
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
function izarra_products_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_custom_pagers().
 */
function izarra_products_default_custom_pagers() {
  $custom_pagers = array();

  $custom_pagers[] = array(
    'pid' => 2,
    'title' => 'Produits',
    'list_php' => '',
    'view' => 'products',
    'args' => '',
    'position' => 'block',
    'visibility_php' => '',
    'node_type' => 'product',
    'reverse_list' => 0,
  );
  return $custom_pagers;
}

/**
 * Implements hook_node_info().
 */
function izarra_products_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Produit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
