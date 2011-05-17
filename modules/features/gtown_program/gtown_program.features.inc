<?php

/**
 * Implementation of hook_node_info().
 */
function gtown_program_node_info() {
  $items = array(
    'program' => array(
      'name' => t('Program'),
      'module' => 'features',
      'description' => t('Program content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
