<?php
/**
 * @file
 * izarra_config.box.inc
 */

/**
 * Implements hook_default_box().
 */
function izarra_config_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'izarra_social_networks';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Réseaux sociaux';
  $box->options = array(
    'body' => array(
      'value' => '<p>Rejoignez-nous et partagez</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['izarra_social_networks'] = $box;

  return $export;
}
