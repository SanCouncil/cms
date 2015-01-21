<p><?php print render($intro_text); ?></p>
<div class="SanCouncil_Bootstrap-user-login-form-wrapper">
  <?php print drupal_render_children($form) ?>
  <?php $region = block_get_blocks_by_region('oauthconn_reg'); ?>
  <?php print render($region); ?>
</div>
