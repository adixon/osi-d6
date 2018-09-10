if (Drupal.jsEnabled) {
  $(document).ready(function () {
    $('.node-type-osi .content dl.osi-answer-help').css('display','none');
    $('.node-type-osi .content .osi-answer-help-title .ui-icon').toggle( 
      function () {
        $(this).parent().next('dl.osi-answer-help').show('slow');
        $(this).removeClass('ui-icon-circle-plus');
        $(this).addClass('ui-icon-circle-minus');
      }, 
      function() {
        $(this).parent().next('dl.osi-answer-help').hide('slow');
        $(this).removeClass('ui-icon-circle-minus');
        $(this).addClass('ui-icon-circle-plus');
    });
    $('form.osi-answers-form input.form-submit').css('display','none');
    $('form.osi-answers-form input.form-radio').attr('checked',0);
    $('form.osi-answers-form').each(function() {
      var keys = this.id.split('-');
      var nid = keys[keys.length - 1];
      $.get(Drupal.settings.basePath+"osi/update/" + nid,function(data) {
        $('#edit-result-'+nid+'-'+data).attr('checked',1).parents('form').css('background','#FFFFCC');
      });
    });
    $('form.osi-answers-form input.form-radio').click( function () { 
      var result = this.value; 
      var keys = this.id.split("-");
      var nid = keys[2];
      $.get(Drupal.settings.basePath+"osi/update/" + nid + "/" + result,function(data) {
        $('#osi-changed-'+nid).html("<em>"+data+"</em>");
      });      
      $('#osi-render-answers-form-'+nid).animate({'backgroundColor': '#FF9'},'slow');
    }); 
    /* user report and list page functions */
    $('dl.osi-collapsed dd').hide();
    $('dl.osi-uncollapsed > dt > a.osi-collapsible').toggle( 
      function() {
        $(this).addClass('osi-collapsed').removeClass('osi-uncollapsed').parent().next().hide('fast');
        return false;
      },
      function () {
        $(this).addClass('osi-uncollapsed').removeClass('osi-collapsed').parent().next().show('fast');
        return false;
      }); 
    $('dl.osi-collapsed > dt > a.osi-collapsible').toggle( 
      function() {
        $(this).addClass('osi-uncollapsed').removeClass('osi-collapsed').parent().next().show('fast');
        return false;
      },
      function () {
        $(this).addClass('osi-collapsed').removeClass('osi-uncollapsed').parent().next().hide('fast');
        return false;
      }); 
    $('#block-osi-1').show(2000).css('background-color','#FF9');
  });
}
