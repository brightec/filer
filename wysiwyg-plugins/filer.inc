<?php

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function filer_filer_plugin() {
  
  global $base_url;
  
  $settings = array('browserURL' => $base_url . '/filer/browser');
  drupal_add_js(array('filer' => $settings), 'setting');
  drupal_add_library('filer', 'filer_launcher');
  
  $plugins['filer'] = array(
    'title' => t('Brightec Media Browser'),
    'vendor url' => 'http://www.brightec.co.uk',
    'icon file' => 'filer.png',
    'icon title' => t('Add media'),
    'settings' => array(),
    'js file' => 'filer.js',
    'css file' => NULL,
    'css path' => NULL,    
  );
  return $plugins;
}