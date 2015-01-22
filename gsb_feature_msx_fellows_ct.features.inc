<?php
/**
 * @file
 * gsb_feature_msx_fellows_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_msx_fellows_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_msx_fellows_ct_node_info() {
  $items = array(
    'msx_fellows' => array(
      'name' => t('MSx Fellow'),
      'base' => 'node_content',
      'description' => t('Add a MSx Fellow'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
