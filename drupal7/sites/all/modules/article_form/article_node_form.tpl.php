<div class="row">
  <div class="col-md-6">
    <?php print drupal_render($form['title']); ?>
    <?php print drupal_render($form['field_image']); ?>
    <?php print drupal_render($form['field_video']); ?>
    <?php print drupal_render($form['field_attachments']); ?>
    <?php print drupal_render($form['field_tags']); ?>
  </div>

  <div class="col-md-6">
    <?php print drupal_render($form['body']); ?>
  </div>
</div>

<div class="row">
  <div class="col-md-12">
    <?php print drupal_render($form['additional_settings']); ?>
  </div>
</div>
<div>

<?php print drupal_render($form['actions']['submit']); ?>

<?php print drupal_render($form['actions']['preview']); ?>

<?php print drupal_render($form['actions']['delete']); ?>

<?php print drupal_render_children($form); ?>

</div>
