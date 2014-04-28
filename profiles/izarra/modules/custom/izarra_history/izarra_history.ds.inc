<?php
/**
 * @file
 * izarra_history.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function izarra_history_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|historical_fact|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'historical_fact';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_position',
        1 => 'field_bg_image',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_position' => 'ds_content',
      'field_bg_image' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|historical_fact|full'] = $ds_layout;

  return $export;
}
