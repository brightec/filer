(function ($) {

  namespace('Drupal.filer.dialogs');
  
  Drupal.filer.dialogs.mediaBrowser = function() {
    $('<div><iframe id="filer-iframe" style="width: 100%; height: 100%;" frameborder="0" src="' + Drupal.settings.filer.browserURL + '"></iframe></div>').dialog({
      draggable: false,
      modal: true,
      resizable: false,
      title: 'Brightec Media Browser',
      height: '600',
      width: '80%'
    });
  }

})(jQuery);