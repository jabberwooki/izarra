<?php
/**
 * @file
 * izarra_cocktails.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function izarra_cocktails_taxonomy_default_vocabularies() {
  return array(
    'cocktail_type' => array(
      'name' => 'Type de cocktail',
      'machine_name' => 'cocktail_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
