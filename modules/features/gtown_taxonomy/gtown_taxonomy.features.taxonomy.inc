<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function gtown_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'topic' => array(
      'name' => 'Topic',
      'description' => 'Topics vocabulary used to help sort and display multiple content types.',
      'help' => 'Please select a topic for this content.',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_topic',
      'weight' => '0',
      'nodes' => array(
        'event' => 'event',
        'story' => 'story',
      ),
    ),
  );
}
