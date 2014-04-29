<?php
/**
 * @file
 * izarra_history.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function izarra_history_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_au-fil-du-temps:historical-facts
  $menu_links['main-menu_au-fil-du-temps:historical-facts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'historical-facts',
    'router_path' => 'historical-facts',
    'link_title' => 'Au fil du temps',
    'options' => array(
      'identifier' => 'main-menu_au-fil-du-temps:historical-facts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'parent_identifier' => 'main-menu_maison-izarra:<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Au fil du temps');


  return $menu_links;
}
