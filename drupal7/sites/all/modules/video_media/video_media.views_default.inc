<?php
/**
 * @file
 * video_media.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function video_media_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'recent_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Recent Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_video']['element_class'] = 'responsive-video';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Video (field_video:fid) */
  $handler->display->display_options['filters']['field_video_fid']['id'] = 'field_video_fid';
  $handler->display->display_options['filters']['field_video_fid']['table'] = 'field_data_field_video';
  $handler->display->display_options['filters']['field_video_fid']['field'] = 'field_video_fid';
  $handler->display->display_options['filters']['field_video_fid']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Video (field_video:fid) */
  $handler->display->display_options['filters']['field_video_fid']['id'] = 'field_video_fid';
  $handler->display->display_options['filters']['field_video_fid']['table'] = 'field_data_field_video';
  $handler->display->display_options['filters']['field_video_fid']['field'] = 'field_video_fid';
  $handler->display->display_options['filters']['field_video_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Public Resource (field_resource) */
  $handler->display->display_options['filters']['field_resource_value']['id'] = 'field_resource_value';
  $handler->display->display_options['filters']['field_resource_value']['table'] = 'field_data_field_resource';
  $handler->display->display_options['filters']['field_resource_value']['field'] = 'field_resource_value';
  $handler->display->display_options['filters']['field_resource_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'recent_videos';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Video (field_video:fid) */
  $handler->display->display_options['filters']['field_video_fid']['id'] = 'field_video_fid';
  $handler->display->display_options['filters']['field_video_fid']['table'] = 'field_data_field_video';
  $handler->display->display_options['filters']['field_video_fid']['field'] = 'field_video_fid';
  $handler->display->display_options['filters']['field_video_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Featured Video (field_featured_video) */
  $handler->display->display_options['filters']['field_featured_video_value']['id'] = 'field_featured_video_value';
  $handler->display->display_options['filters']['field_featured_video_value']['table'] = 'field_data_field_featured_video';
  $handler->display->display_options['filters']['field_featured_video_value']['field'] = 'field_featured_video_value';
  $handler->display->display_options['filters']['field_featured_video_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => '8',
    3 => '3',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_video' => 'field_video',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Video (editable) */
  $handler->display->display_options['fields']['field_featured_video_editable']['id'] = 'field_featured_video_editable';
  $handler->display->display_options['fields']['field_featured_video_editable']['table'] = 'field_data_field_featured_video';
  $handler->display->display_options['fields']['field_featured_video_editable']['field'] = 'field_featured_video_editable';
  $handler->display->display_options['fields']['field_featured_video_editable']['label'] = 'Featured Video?';
  $handler->display->display_options['fields']['field_featured_video_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_video_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_featured_video_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_featured_video_editable']['suppress_description'] = 0;
  $handler->display->display_options['path'] = 'featured_video_admin';
  $export['recent_videos'] = $view;

  return $export;
}
