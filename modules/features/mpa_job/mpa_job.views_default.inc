<?php
/**
 * @file
 * mpa_job.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mpa_job_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'jobs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jobs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Jobs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'job' => 'job',
  );
  /* Filter criterion: Content: Industry (field_industry) */
  $handler->display->display_options['filters']['field_industry_value']['id'] = 'field_industry_value';
  $handler->display->display_options['filters']['field_industry_value']['table'] = 'field_data_field_industry';
  $handler->display->display_options['filters']['field_industry_value']['field'] = 'field_industry_value';
  $handler->display->display_options['filters']['field_industry_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_industry_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_industry_value']['expose']['operator_id'] = 'field_industry_value_op';
  $handler->display->display_options['filters']['field_industry_value']['expose']['label'] = 'Industry (field_industry)';
  $handler->display->display_options['filters']['field_industry_value']['expose']['operator'] = 'field_industry_value_op';
  $handler->display->display_options['filters']['field_industry_value']['expose']['identifier'] = 'field_industry_value';
  $handler->display->display_options['filters']['field_industry_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Job type (field_job_type) */
  $handler->display->display_options['filters']['field_job_type_value']['id'] = 'field_job_type_value';
  $handler->display->display_options['filters']['field_job_type_value']['table'] = 'field_data_field_job_type';
  $handler->display->display_options['filters']['field_job_type_value']['field'] = 'field_job_type_value';
  $handler->display->display_options['filters']['field_job_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_job_type_value']['expose']['operator_id'] = 'field_job_type_value_op';
  $handler->display->display_options['filters']['field_job_type_value']['expose']['label'] = 'Job type (field_job_type)';
  $handler->display->display_options['filters']['field_job_type_value']['expose']['operator'] = 'field_job_type_value_op';
  $handler->display->display_options['filters']['field_job_type_value']['expose']['identifier'] = 'field_job_type_value';
  $handler->display->display_options['filters']['field_job_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'jobs';
  $export['jobs'] = $view;

  return $export;
}
