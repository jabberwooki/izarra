<?php
/**
 * @file
 * Enables modules and site configuration for the Izarra site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function izarra_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name.
  $form['site_information']['site_name']['#default_value'] = 'Izarra';
  $form['server_settings']['site_default_country']['#default_value'] = 'FR';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Paris';
  unset($form['server_settings']['date_default_timezone']['#attributes']);
}
