<div class="row">
  <div class="col-md-6">
    <?php print drupal_render($form['title']); ?>
    <?php print drupal_render($form['field_date']); ?>
  </div>

  <div class="col-md-6">
    <?php print drupal_render($form['field_details']); ?>
    <?php print drupal_render($form['field_location']); ?>
    <?php print drupal_render($form['field_info_link']); ?>
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
