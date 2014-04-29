<?php
/**
 * @file
 * izarra_config.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function izarra_config_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['boxes-izarra_social_networks'] = array(
    'cache' => -2,
    'custom' => 0,
    'delta' => 'izarra_social_networks',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'boxes',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['izarra_config-izarra_site_slogan'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'izarra_site_slogan',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'izarra_config',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
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
