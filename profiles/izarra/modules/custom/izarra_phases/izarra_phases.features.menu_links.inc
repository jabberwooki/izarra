<?php
/**
 * @file
 * izarra_phases.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function izarra_phases_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_elaboration:phases
  $menu_links['main-menu_elaboration:phases'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'phases',
    'router_path' => 'phases',
    'link_title' => 'Elaboration',
    'options' => array(
      'identifier' => 'main-menu_elaboration:phases',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'parent_identifier' => 'main-menu_maison-izarra:<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Elaboration');


  return $menu_links;
}
