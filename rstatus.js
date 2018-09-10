if (Drupal.jsEnabled) {
  $(document).ready(function () {
    $('#block-views-Standards-block_1 li.views-row .views-field-nid').each(function() {
      var node = $(this);
      var nid = node.text().trim();
      if (nid.length > 0) {
        node.load(Drupal.settings.basePath+"osi/rstatus/" + nid);
      }
    });
  });
}
