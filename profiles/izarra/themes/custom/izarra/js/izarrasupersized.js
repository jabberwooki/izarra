(function($){ 
    

    $(function(){ // DOM Ready
    
	retaille();                     // calcul au chargement de la page
    $(window).scroll(retaille);     // calcul au défilement de la page
    $(window).resize(function() {
        retaille();
    });     // calcul au redimensionnement de la page
	
	
    }); 

   function retaille(){
            hauteur_dispo = getWindowHeight() - ($('#section-header').height()) - ($('#section-footer').height());
            largeur_dispo = getWindowWidth() - getScrollerWidth();
            
            

            $('#section-content').height(hauteur_dispo).width(largeur_dispo);
            $('#region-content').height(hauteur_dispo).width(largeur_dispo);
            $('#zone-content').height(hauteur_dispo).width(largeur_dispo);
            $('#views_slideshow_cycle_teaser_section_slides-page').height(hauteur_dispo).width(largeur_dispo);
            $('#views_slideshow_cycle_main_slides-page .slide').height(hauteur_dispo).width(largeur_dispo);

            ratio_dispo = largeur_dispo / hauteur_dispo;
            largeur_originale = 1920;
            hauteur_originale = 1080;
            ratio_original = largeur_originale / hauteur_originale;

            if(ratio_dispo > ratio_original){
                    $('#views_slideshow_cycle_main_slides-page .illus img').width(largeur_dispo);
                    $('#views_slideshow_cycle_main_slides-page .illus img').height(largeur_dispo/ratio_original);
                    marge_neg = Math.round(((largeur_dispo/ratio_original) - hauteur_dispo ) / 2);
                    $('#views_slideshow_cycle_main_slides-page .illus img').css('top', '-' + marge_neg + 'px');
                    $('#views_slideshow_cycle_main_slides-page .illus img').css('left', 0);	
                    
            } else {
                    $('#views_slideshow_cycle_main_slides-page .illus img').height(hauteur_dispo);
                    $('#views_slideshow_cycle_main_slides-page .illus img').width(hauteur_dispo*ratio_original);
                    marge_neg = Math.round(((hauteur_dispo*ratio_original) - largeur_dispo ) / 2);
                    $('#views_slideshow_cycle_main_slides-page .illus img').css('left', '-' + marge_neg + 'px');
                    $('#views_slideshow_cycle_main_slides-page .illus img').css('top', 0);
                    
            }
            
            hauteurtitre  =  ($('#page-title').height());
            hauteurariane = ($('#breadcrumb').height());
            hauteurcontrol = ($('#views_slideshow_controls_text_slides-page').height());
            $('#breadcrumb').css('margin-bottom', -hauteurariane);
            $('#page-title').css('margin-bottom', -hauteurtitre);
            $('#views_slideshow_controls_text_slides-page').css('margin-bottom', -hauteurcontrol);

    };

})(jQuery);

