<?php

/**
 * Implementation of hook_node_info().
 */
function gtown_story_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Story'),
      'module' => 'features',
      'description' => t('Story content type'),
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
