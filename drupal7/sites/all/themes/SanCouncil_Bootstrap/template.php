<?php
  /**Responsive images for Organizations node*/
  /*function SanCouncil_Bootstrap_preprocess_field(&$variables) {
    if($variables['element']['#field_name'] == 'field_icon'){
      foreach($variables['items'] as $key => $item){
        $variables['items'][ $key ]['#item']['attributes']['class'][] = 'img-responsive';
      }
    }
    if($variables['element']['#field_name'] == 'field_logo'){
      foreach($variables['items'] as $key => $item){
        $variables['items'][ $key ]['#item']['attributes']['class'][] = 'img-responsive';
      }
    }
  }
   */

  function SanCouncil_Bootstrap_preprocess_image(&$variables) {
    $variables['attributes']['class'][] = 'img-responsive';
  }

function SanCouncil_Bootstrap_process_page(&$variables) {
  unset($variables['secondary_nav']['#theme_wrappers']);
}
