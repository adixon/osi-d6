<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function osi_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_node_info().
 */
function osi_node_info() {
  $items = array(
    'category' => array(
      'name' => t('Category or Subcategory'),
      'module' => 'features',
      'description' => t('A name and description of a category or subcategory/section of Standards. Each entry has a corresponding term in the Category vocabulary, linked via the NAT mechanism. These terms apply to Standards.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'standard' => array(
      'name' => t('Standard'),
      'module' => 'features',
      'description' => t('The "standard" to which organizations are aspiring. Tied to the Standard vocabulary via NAT, which is used to categorize the Indicator questions.'),
      'has_title' => '1',
      'title_label' => t('Standard'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items + _osi_node_info();
}

/**
 * Implementation of hook_views_api().
 */
function osi_views_api() {
  return array(
    'api' => '2',
  );
}
