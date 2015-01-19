<?php
/**
 * @file
 * grants_database.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function grants_database_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-executive_grants-database:grants/
  $menu_links['menu-executive_grants-database:grants/'] = array(
    'menu_name' => 'menu-executive',
    'link_path' => 'grants/',
    'router_path' => 'grants',
    'link_title' => 'Grants Database',
    'options' => array(
      'attributes' => array(
        'title' => 'Grants database.',
      ),
      'identifier' => 'menu-executive_grants-database:grants/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-executive_import-grants:import/grant
  $menu_links['menu-executive_import-grants:import/grant'] = array(
    'menu_name' => 'menu-executive',
    'link_path' => 'import/grant',
    'router_path' => 'import/%',
    'link_title' => 'Import Grants',
    'options' => array(
      'attributes' => array(
        'title' => 'Tool for importing new grants from CSV file.',
      ),
      'identifier' => 'menu-executive_import-grants:import/grant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Grants Database');
  t('Import Grants');


  return $menu_links;
}
