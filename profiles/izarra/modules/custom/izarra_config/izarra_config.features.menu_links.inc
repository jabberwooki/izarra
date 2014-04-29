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
  // Exported menu link: menu-footer-menu_dossier-de-presse:node/28
  $menu_links['menu-footer-menu_dossier-de-presse:node/28'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Dossier de Presse',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_dossier-de-presse:node/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_legal-notice:node/2
  $menu_links['menu-footer-menu_legal-notice:node/2'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Legal notice',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_legal-notice:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_mentions-lgales:node/1
  $menu_links['menu-footer-menu_mentions-lgales:node/1'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Mentions légales',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_mentions-lgales:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_press-pack:node/29
  $menu_links['menu-footer-menu_press-pack:node/29'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Press Pack',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_press-pack:node/29',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -9,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Accueil');
  t('Dossier de Presse');
  t('Legal notice');
  t('Maison Izarra');
  t('Mentions légales');
  t('Press Pack');


  return $menu_links;
}
