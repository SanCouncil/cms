<?php
/**
 * @file
 * grants_database.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function grants_database_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-executive.
  $menus['menu-executive'] = array(
    'menu_name' => 'menu-executive',
    'title' => 'Executive',
    'description' => 'Capabilities only exposed to executive partners.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Capabilities only exposed to executive partners.');
  t('Executive');


  return $menus;
}
