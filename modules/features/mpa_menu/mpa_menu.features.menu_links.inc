<?php
/**
 * @file
 * mpa_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mpa_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:forum
  $menu_links['main-menu:forum'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forum',
    'options' => array(
      'attributes' => array(
        'title' => 'Forum',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:glossary
  $menu_links['main-menu:glossary'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'glossary',
    'router_path' => 'glossary',
    'link_title' => 'Glossary',
    'options' => array(
      'attributes' => array(
        'title' => 'Glossary',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: main-menu:node/11
  $menu_links['main-menu:node/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Contact the MPA',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact the MPA');
  t('Forum');
  t('Glossary');


  return $menu_links;
}
