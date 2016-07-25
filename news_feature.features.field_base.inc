<?php
/**
 * @file
 * news_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function news_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_actu_visuel'.
  $field_bases['field_actu_visuel'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_actu_visuel',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
