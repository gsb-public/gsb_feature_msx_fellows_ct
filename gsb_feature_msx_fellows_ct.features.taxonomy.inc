<?php
/**
 * @file
 * gsb_feature_msx_fellows_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_msx_fellows_ct_taxonomy_default_vocabularies() {
  return array(
    'industry' => array(
      'name' => 'Industry',
      'machine_name' => 'industry',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'region' => array(
      'name' => 'Region',
      'machine_name' => 'region',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
