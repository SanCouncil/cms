<?php
/**
 * @file
 * video_media.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function video_media_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_videos:recent_videos
  $menu_links['main-menu_videos:recent_videos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'recent_videos',
    'router_path' => 'recent_videos',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_videos:recent_videos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_information:node/5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Videos');


  return $menu_links;
}
