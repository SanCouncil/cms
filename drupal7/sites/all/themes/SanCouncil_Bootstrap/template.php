<?php
  /**Responsive images for Organizations node*/
  function SanCouncil_Bootstrap_preprocess_field(&$variables) {
    if($variables['element']['#field_name'] == 'field_icon'){
      foreach($variables['items'] as $key => $item){
        $variables['items'][ $key ]['#item']['attributes']['class'][] = 'img-responsive';
      }
    }
  }

/**
 * Custom Registration Form tpl
 **/
function SanCouncil_Bootstrap_theme(&$existing, $type, $theme, $path){
  $hooks = array();
  // Make user-register.tpl.php available
  $hooks['user_register_form'] = array (
    'render element' => 'form',
    'path' => drupal_get_path('theme','SanCouncil_Bootstrap').'/templates',
    'template' => 'user-register',
    'preprocess functions' => 
    array('SanCouncil_Bootstrap_preprocess_user_register_form'),
    );
  return $hooks;
}

/**
 * Processing user registration
 **/
function SanCouncil_Bootstrap_preprocess_user_register_form(&$vars) 
{
  $args = func_get_args();
  array_shift($args);
  $form_state['build_info']['args'] = 
    $args; 
  $vars['form'] = 
    drupal_build_form('user_register_form', 
    $form_state['build_info']['args']);
  $vars['intro_text'] = t('This is my super awesome reg form');
}
?>
