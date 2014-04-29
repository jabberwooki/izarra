<?php
/**
 * @file
 * izarra_cocktails.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function izarra_cocktails_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Mixologie',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd1266e0b-18d2-4a1f-b7f0-1ab792c23e46',
  'type' => 'page',
  'language' => 'fr',
  'created' => 1398768361,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '35040281-070b-45c5-b6d1-29f28d3236bf',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Mauris at mauris dui. Integer scelerisque neque ut odio mattis lobortis ut quis purus. Nulla facilisi. Suspendisse id sapien massa. Aenean mollis nisl in tincidunt pulvinar. Aliquam condimentum, lacus vel malesuada luctus, orci leo congue purus, sed rutrum augue ligula vel elit. Phasellus neque dui, sagittis et adipiscing in, ornare eleifend tortor. Sed nec laoreet justo? Duis eu urna nec ipsum posuere vestibulum. Aliquam convallis volutpat leo, non pretium risus! Curabitur ac dictum felis? Nulla cursus erat id purus fringilla euismod. Nam egestas arcu eu orci rutrum, nec tempor augue laoreet! Vestibulum eleifend hendrerit tempus. Fusce pretium velit vitae lorem consequat semper. Integer iaculis magna in diam tincidunt eleifend. Phasellus in diam suscipit, molestie magna quis, bibendum ante.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Mauris at mauris dui. Integer scelerisque neque ut odio mattis lobortis ut quis purus. Nulla facilisi. Suspendisse id sapien massa. Aenean mollis nisl in tincidunt pulvinar. Aliquam condimentum, lacus vel malesuada luctus, orci leo congue purus, sed rutrum augue ligula vel elit. Phasellus neque dui, sagittis et adipiscing in, ornare eleifend tortor. Sed nec laoreet justo? Duis eu urna nec ipsum posuere vestibulum. Aliquam convallis volutpat leo, non pretium risus! Curabitur ac dictum felis? Nulla cursus erat id purus fringilla euismod. Nam egestas arcu eu orci rutrum, nec tempor augue laoreet! Vestibulum eleifend hendrerit tempus. Fusce pretium velit vitae lorem consequat semper. Integer iaculis magna in diam tincidunt eleifend. Phasellus in diam suscipit, molestie magna quis, bibendum ante.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_bg_image' => array(
    'und' => array(
      0 => array(
        'fid' => 32,
        'uid' => 1,
        'filename' => 'image-test_fullhd.jpg',
        'uri' => 'public://image-test_fullhd_8.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 16976,
        'status' => 1,
        'timestamp' => 1398768361,
        'uuid' => 'ed7fdafa-ebe9-40b7-b67f-177798ab5aa6',
        'alt' => '',
        'title' => '',
        'width' => 1920,
        'height' => 1080,
      ),
    ),
  ),
  'field_subtitle' => array(
    'und' => array(
      0 => array(
        'value' => 'L\'art de mélanger les saveurs',
        'format' => NULL,
        'safe_value' => 'L&#039;art de mélanger les saveurs',
      ),
    ),
  ),
  'metatags' => array(),
  'name' => 'superadmin',
  'picture' => 0,
  'data' => 'b:0;',
  'weight_weight' => FALSE,
  'date' => '2014-04-29 12:46:01 +0200',
);
  return $nodes;
}
