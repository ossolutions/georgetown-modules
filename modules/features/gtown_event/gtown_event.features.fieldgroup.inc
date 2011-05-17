<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function gtown_event_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_links
  $groups['event-group_links'] = array(
    'group_type' => 'standard',
    'type_name' => 'event',
    'group_name' => 'group_links',
    'label' => 'Links',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_video_link',
      '1' => 'field_rsvp_link',
      '2' => 'field_external_link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Links');

  return $groups;
}
