if (Drupal.jsEnabled) {
  $(document).ready(function () {
    if (true == Drupal.settings.osi.complete) {
      var resultsLink = '/user/'+Drupal.settings.osi.uid+'/osi_report';
      $('#content-content .node-type-category').hide('slow').after('<p><strong>Contratulations!</strong></p><p><a href="'+resultsLink+'">View your results</a>');
    }
    else {
      $('#content-content .node-type-category').show();
    }
  });
}
