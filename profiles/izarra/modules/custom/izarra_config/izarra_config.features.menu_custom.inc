<?php
/**
 * @file
 * izarra_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function izarra_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-english-footer-menu.
  $menus['menu-english-footer-menu'] = array(
    'menu_name' => 'menu-english-footer-menu',
    'title' => 'English Footer Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-english-main-menu.
  $menus['menu-english-main-menu'] = array(
    'menu_name' => 'menu-english-main-menu',
    'title' => 'English Main Menu',
    'description' => '',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-french-footer-menu.
  $menus['menu-french-footer-menu'] = array(
    'menu_name' => 'menu-french-footer-menu',
    'title' => 'French Footer Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-french-main-menu.
  $menus['menu-french-main-menu'] = array(
    'menu_name' => 'menu-french-main-menu',
    'title' => 'French Main Menu',
    'description' => '',
    'language' => 'fr',
    'i18n_mode' => 2,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('English Footer Menu');
  t('English Main Menu');
  t('French Footer Menu');
  t('French Main Menu');


  return $menus;
}
