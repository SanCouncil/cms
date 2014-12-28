<?php
/**
 * @file
 * nonprofit_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function nonprofit_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nonprofit_feature_node_info() {
  $items = array(
    'nonprofit' => array(
      'name' => t('Nonprofit'),
      'base' => 'node_content',
      'description' => t('An organization'),
      'has_title' => '1',
      'title_label' => t('Organization Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
