if (Drupal.jsEnabled) {
  $(document).ready(function () {
    if (true == Drupal.settings.osi.complete) {
      $('#content-content .node-type-category').hide('slow');
      $('#block-views-Resources-block_4').show('slow');
    }
    else {
      $('#content-content .node-type-category').show();
      $('#block-views-Resources-block_4').hide();
    }
  });
}
