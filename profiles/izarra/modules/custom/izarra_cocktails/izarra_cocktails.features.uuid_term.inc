<?php
/**
 * @file
 * izarra_cocktails.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function izarra_cocktails_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'mixme',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '598a4607-cb43-4fe9-b430-a27b3b59ba70',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'cocktail_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'long',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '704a125e-edd1-4a3b-b2d3-d56908e266e3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'cocktail_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'court',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '93eda6ad-63ce-44d6-90aa-dc0173bc75ed',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'cocktail_type',
    'metatags' => array(),
  );
  return $terms;
}
