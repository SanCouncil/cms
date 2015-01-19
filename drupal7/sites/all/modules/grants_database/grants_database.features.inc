<?php
/**
 * @file
 * grants_database.features.inc
 */

/**
 * Implements hook_views_api().
 */
function grants_database_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function grants_database_node_info() {
  $items = array(
    'grant' => array(
      'name' => t('Grant'),
      'base' => 'node_content',
      'description' => t('Listing of available grants'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('To be entered by SanCouncil'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
