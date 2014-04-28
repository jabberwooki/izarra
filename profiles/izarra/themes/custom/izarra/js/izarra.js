(function($) {
Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {
    //code starts
// On cache la zone de texte
   $('.desc').hide();
   // toggle() lorsque le lien avec l'ID #toggler est cliqué
   $('.title').click(function()
  {
  	  $('.title').toggleClass("selected");
      $('.desc').slideToggle(400);
      return false;
   });
    //code ends
  }
};
})(jQuery);
