<?php

/**
 * @file
 * content_type_bitcoin_daily.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_bitcoin_daily_node_info() {
  $items = array(
    'bitcoin_daily' => array(
      'name' => t('Bitcoin Daily'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
