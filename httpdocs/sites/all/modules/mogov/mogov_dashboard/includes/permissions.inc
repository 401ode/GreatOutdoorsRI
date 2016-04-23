<?php

/**
 * Implements hook_menu().
 */
function mogov_dashboard_permission() {
  return array(
    // Allow access to social media accounts configuration
    'access mogov dashboard' => array(
      'title' => t('Access MO.gov Dashboard'),
      'description' => t('Allows access to the pages and tabs generated by the Dashboard module.'),
    ),
  );
}