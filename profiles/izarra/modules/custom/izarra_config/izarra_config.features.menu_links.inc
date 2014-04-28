<?php
/**
 * @file
 * izarra_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function izarra_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_accueil:<front>
  $menu_links['main-menu_accueil:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accueil',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_accueil:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_maison-izarra:<nolink>
  $menu_links['main-menu_maison-izarra:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Maison Izarra',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_maison-izarra:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -30,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Accueil');
  t('Maison Izarra');


  return $menu_links;
}
