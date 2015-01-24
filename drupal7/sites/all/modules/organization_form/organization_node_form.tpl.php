<div class="row">
  <div class="col-md-6">
    <?php print drupal_render($form['title']); ?>
    <?php print drupal_render($form['field_website']); ?>
    <?php print drupal_render($form['field_donate_link']); ?>
    <?php print drupal_render($form['field_org_email']); ?>
  </div>

  <div class="col-md-6">
    <?php print drupal_render($form['field_icon']); ?>
    <h4>Check box below if organization is a "Featured" organization:</h4>
    <?php print drupal_render($form['field_featured']); ?>
  </div>
</div>

<div class="row">
  <div class="col-md-4">
    <?php print drupal_render($form['field_type']); ?>
  </div>
  <div class="col-md-4">
    <?php print drupal_render($form['field_subtype']); ?>
  </div>
  <div class="col-md-4">
    <?php print drupal_render($form['field_county']); ?>
  </div>
</div>
<div class="row">
  <div class="col-md-6">
    <?php print drupal_render($form['body']); ?>
  </div>
  <div class="col-md-6">
    <?php print drupal_render($form['field_partnership']); ?>
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
