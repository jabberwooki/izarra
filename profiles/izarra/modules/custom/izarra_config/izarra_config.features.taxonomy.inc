<?php
/**
 * @file
 * izarra_config.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function izarra_config_taxonomy_default_vocabularies() {
  return array(
    'position' => array(
      'name' => 'Position',
      'machine_name' => 'position',
      'description' => 'Position of the description text on slides.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
