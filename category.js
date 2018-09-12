if (Drupal.jsEnabled) {
  $(document).ready(function () {
    if (true == Drupal.settings.osi.complete) {
      $('#content-content .node-type-category').hide('slow');
      $('.osi-complete').show('slow');
    }
    else {
      $('#content-content .node-type-category').show();
      $('.osi-complete').hide();
    }
  });
}
