<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function osi_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'category';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'category' => 'category',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'osi-category-status' => array(
          'module' => 'osi',
          'delta' => 'category-status',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-Standards-block_1' => array(
          'module' => 'views',
          'delta' => 'Standards-block_1',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'views-Resources-block_4' => array(
          'module' => 'views',
          'delta' => 'Resources-block_4',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['category'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front-user';
  $context->description = 'Authenticated user category blocks';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'osi-category-blocks' => array(
          'module' => 'osi',
          'delta' => 'category-blocks',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Authenticated user category blocks');
  $export['front-user'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'standard';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'standard' => 'standard',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'osi-category-status' => array(
          'module' => 'osi',
          'delta' => 'category-status',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-Indicators-block_1' => array(
          'module' => 'views',
          'delta' => 'Indicators-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
        'views-Resources-block_1' => array(
          'module' => 'views',
          'delta' => 'Resources-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
        'osi-standard-comments' => array(
          'module' => 'osi',
          'delta' => 'standard-comments',
          'region' => 'content_bottom',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['standard'] = $context;

  return $export;
}
