<?php
/**
 * @file
 * izarra_products.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function izarra_products_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_izarra-jaune:node/19
  $menu_links['main-menu_izarra-jaune:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Izarra jaune',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_izarra-jaune:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'parent_identifier' => 'main-menu_jauve-vert-et-54:node/17',
  );
  // Exported menu link: main-menu_izarra-vert:node/18
  $menu_links['main-menu_izarra-vert:node/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Izarra vert',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_izarra-vert:node/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_jauve-vert-et-54:node/17',
  );
  // Exported menu link: main-menu_jauve-vert-et-54:node/17
  $menu_links['main-menu_jauve-vert-et-54:node/17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Jauve, Vert et 54',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_jauve-vert-et-54:node/17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -20,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Izarra jaune');
  t('Izarra vert');
  t('Jauve, Vert et 54');


  return $menu_links;
}
