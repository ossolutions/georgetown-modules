<?php

/**
 * Implementation of hook_node_info().
 */
function gtown_discussion_node_info() {
  $items = array(
    'discussion' => array(
      'name' => t('Discussion'),
      'module' => 'features',
      'description' => t('Discussion content.'),
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
