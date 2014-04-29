<?php
/**
 * @file
 * izarra_products.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function izarra_products_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['custom_pagers-2'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 2,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'custom_pagers',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'izarra' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'izarra',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
