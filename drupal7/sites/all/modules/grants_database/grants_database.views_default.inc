<?php
/**
 * @file
 * grants_database.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function grants_database_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'grants';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Grants';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Area Grant Database';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => '8',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Selection Date (field_selection_date) */
  $handler->display->display_options['sorts']['field_selection_date_value']['id'] = 'field_selection_date_value';
  $handler->display->display_options['sorts']['field_selection_date_value']['table'] = 'field_data_field_selection_date';
  $handler->display->display_options['sorts']['field_selection_date_value']['field'] = 'field_selection_date_value';
  $handler->display->display_options['sorts']['field_selection_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_selection_date_value']['expose']['label'] = 'Selection Date';
  /* Sort criterion: Content: Date of Submission (field_date_of_submission) */
  $handler->display->display_options['sorts']['field_date_of_submission_value']['id'] = 'field_date_of_submission_value';
  $handler->display->display_options['sorts']['field_date_of_submission_value']['table'] = 'field_data_field_date_of_submission';
  $handler->display->display_options['sorts']['field_date_of_submission_value']['field'] = 'field_date_of_submission_value';
  $handler->display->display_options['sorts']['field_date_of_submission_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_date_of_submission_value']['expose']['label'] = 'Date of Submission';
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
    'grant' => 'grant',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Requirements (field_requirements) */
  $handler->display->display_options['filters']['field_requirements_value']['id'] = 'field_requirements_value';
  $handler->display->display_options['filters']['field_requirements_value']['table'] = 'field_data_field_requirements';
  $handler->display->display_options['filters']['field_requirements_value']['field'] = 'field_requirements_value';
  $handler->display->display_options['filters']['field_requirements_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_requirements_value']['group'] = 1;
  $handler->display->display_options['filters']['field_requirements_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_requirements_value']['expose']['operator_id'] = 'field_requirements_value_op';
  $handler->display->display_options['filters']['field_requirements_value']['expose']['label'] = 'Requirements';
  $handler->display->display_options['filters']['field_requirements_value']['expose']['operator'] = 'field_requirements_value_op';
  $handler->display->display_options['filters']['field_requirements_value']['expose']['identifier'] = 'field_requirements_value';
  $handler->display->display_options['filters']['field_requirements_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Trustees and Employees (field_trustees_and_employees) */
  $handler->display->display_options['filters']['field_trustees_and_employees_value']['id'] = 'field_trustees_and_employees_value';
  $handler->display->display_options['filters']['field_trustees_and_employees_value']['table'] = 'field_data_field_trustees_and_employees';
  $handler->display->display_options['filters']['field_trustees_and_employees_value']['field'] = 'field_trustees_and_employees_value';
  $handler->display->display_options['filters']['field_trustees_and_employees_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_trustees_and_employees_value']['group'] = 1;
  $handler->display->display_options['filters']['field_trustees_and_employees_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trustees_and_employees_value']['expose']['operator_id'] = 'field_trustees_and_employees_value_op';
  $handler->display->display_options['filters']['field_trustees_and_employees_value']['expose']['label'] = 'Trustees and Employees';
  $handler->display->display_options['filters']['field_trustees_and_employees_value']['expose']['operator'] = 'field_trustees_and_employees_value_op';
  $handler->display->display_options['filters']['field_trustees_and_employees_value']['expose']['identifier'] = 'field_trustees_and_employees_value';
  $handler->display->display_options['filters']['field_trustees_and_employees_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Amount High (field_grant_amount_high) */
  $handler->display->display_options['filters']['field_grant_amount_high_value']['id'] = 'field_grant_amount_high_value';
  $handler->display->display_options['filters']['field_grant_amount_high_value']['table'] = 'field_data_field_grant_amount_high';
  $handler->display->display_options['filters']['field_grant_amount_high_value']['field'] = 'field_grant_amount_high_value';
  $handler->display->display_options['filters']['field_grant_amount_high_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_grant_amount_high_value']['group'] = 1;
  $handler->display->display_options['filters']['field_grant_amount_high_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_grant_amount_high_value']['expose']['operator_id'] = 'field_grant_amount_high_value_op';
  $handler->display->display_options['filters']['field_grant_amount_high_value']['expose']['label'] = 'Amount >=';
  $handler->display->display_options['filters']['field_grant_amount_high_value']['expose']['operator'] = 'field_grant_amount_high_value_op';
  $handler->display->display_options['filters']['field_grant_amount_high_value']['expose']['identifier'] = 'field_grant_amount_high_value';
  $handler->display->display_options['filters']['field_grant_amount_high_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_grant_amount_high_value']['group_info']['label'] = 'Amount High (field_grant_amount_high)';
  $handler->display->display_options['filters']['field_grant_amount_high_value']['group_info']['identifier'] = 'field_grant_amount_high_value';
  $handler->display->display_options['filters']['field_grant_amount_high_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_grant_amount_high_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'grants';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['grants'] = $view;

  return $export;
}
