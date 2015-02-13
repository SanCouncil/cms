<?php
  /**Responsive images for Organizations node*/
  function SanCouncil_Bootstrap_preprocess_field(&$variables) {
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

/**
 * Bootstrap theme wrapper function for the my menu links.
 */
function SanCouncil_Bootstrap_menu_tree(&$variables) {
  return $variables['tree'];
}

/**
 * Bootstrap theme wrapper function for the my menu links.
 */
function SanCouncil_Bootstrap_menu_tree__secondary(&$variables) {
  return $variables['tree'];
}
