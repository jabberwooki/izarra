<?php
/**
 * @file
 * izarra_cocktails.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function izarra_cocktails_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_mixologie:node/27
  $menu_links['main-menu_mixologie:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Mixologie',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_mixologie:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -10,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Mixologie');


  return $menu_links;
}
