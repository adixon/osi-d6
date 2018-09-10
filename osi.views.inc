<?php /* implementation of views hooks */

/* expose my custom table data to views */
function osi_views_data() {
  $data = array();
  $data['osi_rid']['table']['group'] = t('Orgwise Self-Assessment Results');
  $data['osi_rid']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
      'handler' => 'views_join_current_rid',
    ),
  );

  return $data;
}

class views_join_current_rid extends views_join {
  function construct($table = NULL, $left_table = NULL, $left_field = NULL, $field = NULL, $extra = array(), $type = 'LEFT') {
    parent::construct($table, $left_table, $left_field, $field, $extra, $type);
  }

  function join($table, &$query) {
    global $user;
    $output = parent::join($table, $query);
    $this->extra  = $this->table.".uid = ".$user->uid;
    parent::build_join($select_query, $table, $view_query);
  }
}

