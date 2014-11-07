<?php
/**
 * @file
 * civihr_employee_portal_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function civihr_employee_portal_features_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard';
  $page->task = 'page';
  $page->admin_title = 'Dashboard';
  $page->admin_description = '';
  $page->path = 'dashboard';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Dashboard',
    'weight' => '0',
    'name' => 'user-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_sutro_double';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'secondcolumn1' => NULL,
      'secondcolumn2' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Dashboard';
  $display->uuid = '091af8a4-cb6d-45b4-8946-1016cd5fb4d8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b149e6e0-7df8-46c5-b5b9-085df7ed8a07';
    $pane->panel = 'column1';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-absence_list-page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b149e6e0-7df8-46c5-b5b9-085df7ed8a07';
    $display->content['new-b149e6e0-7df8-46c5-b5b9-085df7ed8a07'] = $pane;
    $display->panels['column1'][0] = 'new-b149e6e0-7df8-46c5-b5b9-085df7ed8a07';
    $pane = new stdClass();
    $pane->pid = 'new-ea7ad282-bc5e-4de0-876e-d856b3803460';
    $pane->panel = 'column1';
    $pane->type = 'block';
    $pane->subtype = 'civihr_employee_portal-leave';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ea7ad282-bc5e-4de0-876e-d856b3803460';
    $display->content['new-ea7ad282-bc5e-4de0-876e-d856b3803460'] = $pane;
    $display->panels['column1'][1] = 'new-ea7ad282-bc5e-4de0-876e-d856b3803460';
    $pane = new stdClass();
    $pane->pid = 'new-90794cd4-53e8-4759-a786-f04977f62c7c';
    $pane->panel = 'column2';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-absence_list-page_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '90794cd4-53e8-4759-a786-f04977f62c7c';
    $display->content['new-90794cd4-53e8-4759-a786-f04977f62c7c'] = $pane;
    $display->panels['column2'][0] = 'new-90794cd4-53e8-4759-a786-f04977f62c7c';
    $pane = new stdClass();
    $pane->pid = 'new-73347ee0-93bf-40ac-b270-9e9a46792cf0';
    $pane->panel = 'column2';
    $pane->type = 'block';
    $pane->subtype = 'civihr_employee_portal-sick';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '73347ee0-93bf-40ac-b270-9e9a46792cf0';
    $display->content['new-73347ee0-93bf-40ac-b270-9e9a46792cf0'] = $pane;
    $display->panels['column2'][1] = 'new-73347ee0-93bf-40ac-b270-9e9a46792cf0';
    $pane = new stdClass();
    $pane->pid = 'new-492d39db-c7b8-4397-92db-ef4745f2ac5d';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'views-approvals-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '492d39db-c7b8-4397-92db-ef4745f2ac5d';
    $display->content['new-492d39db-c7b8-4397-92db-ef4745f2ac5d'] = $pane;
    $display->panels['header'][0] = 'new-492d39db-c7b8-4397-92db-ef4745f2ac5d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ea7ad282-bc5e-4de0-876e-d856b3803460';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard'] = $page;

  return $pages;

}