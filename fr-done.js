if (Drupal.jsEnabled) {
  $(document).ready(function () {
    $('#block-views-Indicators-block_1 > .content').before('<div class="show-hide"><a class="ui-icon ui-icon-circle-plus">Show/Hide</a>Montrer/Cacher vos réponses.</div>').hide();
    $('#block-views-Indicators-block_1 div.show-hide').toggle(
      function () {
        $(this).parent().children('.content').show('slow');
        $(this).find('a').removeClass('ui-icon-circle-plus').addClass('ui-icon-circle-minus');
      },
      function() {
        $(this).parent().children('.content').hide('slow');
        $(this).find('a').removeClass('ui-icon-circle-minus').addClass('ui-icon-circle-plus');
    });
  });
}
