<?php

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function filer_filer_plugin() {
  
  global $base_url;
  
  $settings = array('browserURL' => $base_url . '/filer/browser');
  
  drupal_add_library('system', 'ui.dialog');
  drupal_add_js(array('filer' => $settings), 'setting');
	drupal_add_js(drupal_get_path('module', 'filer') . '/js/filer-launcher.js', array('group' => JS_DEFAULT));
  
  $plugins['filer'] = array(
    'title' => t('Brightec Media Browser'),
    'vendor url' => 'http://www.brightec.co.uk',
    'icon path' => drupal_get_path('module', 'filer') . '/images',
    'icon file' => 'wysiwyg-filer.png',
    'icon title' => t('Add media'),
    'settings' => array(),
    'js path' => drupal_get_path('module', 'filer') . '/js',
    'js file' => 'wysiwyg-filer.js',
    'css file' => 'filer-launcher.css',
    'css path' => drupal_get_path('module', 'filer') . '/css',
  );
  return $plugins;
}