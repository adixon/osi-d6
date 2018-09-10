$(document).ready(function() {
  osiUpdateStatus(0);
  $('form.osi-answers-form input.form-radio').click( function() {
    osiUpdateStatus(1);
  });
});

function osiUpdateStatus(update) {
  var myboxImage = Drupal.settings.osiModulePath+"/images/progressbar.gif";
  if (update == 1) {
    /* $.get(Drupal.settings.basePath+"osi/status",function(value) {
      var mybarImage = Drupal.settings.osiModulePath+"/images/progressbg_red.gif";
      $("#osi-status").progressBar(value, { boxImage: myboxImage, barImage: mybarImage});
    }); */
  }
  else {
    var mybarImage = Drupal.settings.osiModulePath+"/images/progressbg_yellow.gif";
    $("#block-osi-category-blocks .progressBar").progressBar({ boxImage: myboxImage, barImage: mybarImage});
    $("#block-osi-category-status .progressBar").progressBar({ boxImage: myboxImage, barImage: mybarImage});
  }
}
