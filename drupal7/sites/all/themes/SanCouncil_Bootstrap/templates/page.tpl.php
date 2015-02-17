<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div class="nav-container container">
    <nav class="navbar navbar-default" id="navbar">
        <div class="navbar-header">
            <button class="navbar-toggle collapsed" type="button" data-target="#nav-links" data-toggle="collapse"> <span class="sr-only">Toggle navigation</span>
 <span class="icon-bar"></span>

                <span class="icon-bar"></span> <span class="icon-bar"></span>

            </button> <a title="Home" class="logo navbar-brand" href="#">
            <img class="img-responsive" alt="SanCouncil" src="http://prod.sanantoniononprofitcouncil.org/sites/default/files/sancouncil_logo_40x40.png">
          </a>

        </div>

        <div class="navbar-collapse collapse" id="nav-links">
          <?php if(!empty($primary_nav)): print render($primary_nav); endif;?>
          <ul class="nav navbar-nav navbar-right">
            <li class="divider"></li>
            <li>
              <img class="img-responsive visible-lg-inline visible-md-inline" alt="San Antonio Skyline" src="http://prod.sanantoniononprofitcouncil.org/sites/default/files/logos/san_skyline.png">
            </li>
            <?php if(empty($secondary_nav)): ?>
            <li><a href="<?php print $base_path ?>user">Login</a></li>
            <?php else: print render($secondary_nav); endif;?>
          </ul>
        </div> <!-- navbar-collapse -->
    </nav>
</div><!-- container -->
<div class="main-container container">
  <div class="row">
    <section<?php print $content_column_class; ?>>
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
        <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title)): ?>
        <h1 class="page-header ctr"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if (!empty($tabs)): ?>
      <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if (!empty($page['help'])): ?>
      <?php print render($page['help']); ?>
      <?php endif; ?>
      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </section>
  </div>

  <div class="row">

    <?php if (!empty($page['bodyA'])): ?>
      <div class="col-md-8 block_body">
    <?php print render($page['bodyA']); ?>
      <br><br><br></div>  <!-- /#bodyA -->
    <?php endif; ?>

    <?php if (!empty($page['bodyB'])): ?>
      <div class="col-md-4 block_body">
    <?php print render($page['bodyB']); ?>
      <br><br><br></div>  <!-- /#bodyB -->
    <?php endif; ?>

  </div>

  <div class="row">

    <?php if (!empty($page['bodyC'])): ?>
      <div class="col-md-4 block_body">
    <?php print render($page['bodyC']); ?>
      <br><br><br></div>  <!-- /#bodyC -->
    <?php endif; ?>

    <?php if (!empty($page['bodyD'])): ?>
      <div class="col-md-8 block_body">
    <?php print render($page['bodyD']); ?>
      <br><br><br></div>  <!-- /#bodyD -->
    <?php endif; ?>

</div>

  <div class="row">

    <?php if (!empty($page['body1'])): ?>
      <div class="col-md-4 block_body">
    <?php print render($page['body1']); ?>
      <br><br><br></div>  <!-- /#body1 -->
    <?php endif; ?>

    <?php if (!empty($page['body2'])): ?>
      <div class="col-md-4 block_body">
    <?php print render($page['body2']); ?>
      <br><br><br></div>  <!-- /#body2 -->
    <?php endif; ?>

    <?php if (!empty($page['body3'])): ?>
      <div class="col-md-4 block_body">
    <?php print render($page['body3']); ?>
      <br><br><br></div>  <!-- /#body3 -->
    <?php endif; ?>

  </div>

  <div class="row">

    <?php if (!empty($page['body4'])): ?>
      <div class="col-md-4 block_body">
    <?php print render($page['body4']); ?>
      <br><br><br></div>  <!-- /#body1 -->
    <?php endif; ?>

    <?php if (!empty($page['body5'])): ?>
      <div class="col-md-4 block_body">
    <?php print render($page['body5']); ?>
      <br><br><br></div>  <!-- /#body2 -->
    <?php endif; ?>

    <?php if (!empty($page['body6'])): ?>
      <div class="col-md-4 block_body">
    <?php print render($page['body6']); ?>
      <br><br><br></div>  <!-- /#body3 -->
    <?php endif; ?>

  </div>
</div> <!-- /main container -->

<div class="footer container">
  <div class="row">
    <div class="col-md-4 col-md-offset-4 social-media">
      <a href="https://www.facebook.com/pages/San-Antonio-Nonprofit-Council/235546073271257" target="_blank"><img class="social-media" src="<?php print $base_path ?>sites/default/files/soc_med/facebook-64.png" alt="Facebook"></a>
      <a href="https://twitter.com/SANCouncil" target="_blank"><img class="social-media" src="<?php print $base_path ?>sites/default/files/soc_med/twitter-64.png" alt="Twitter"></a>
      <a href="https://vimeo.com/user33166448" target="_blank"><img class="social-media" src="<?php print $base_path ?>sites/default/files/soc_med/vimeo-64.png" alt="Vimeo"></a>
    </div>
  </div>
  <div class="row">
    <div class="col-md-3 ctr">
      <h5>
      1150 N. Loop 1604 W<br>
      Suite 108-511<br>
      San Antonio, Texas 78248<br>
      210.229.0333<br>
      <a href="mailto:scottm@sancouncil.org">Email</a>
      </h5>
    </div>

    <?php if (!empty($page['footer'])): ?>
      <div class="col-md-1 tweety">
        <a href="https://twitter.com/SANCouncil" target="_blank"><img src="<?php print $base_path ?>sites/default/files/soc_med/tweety.gif" alt="Tweety" width="90"></a>
      </div>
      <div class="col-md-6 tweety-feed">
      <h5>
    <?php print render($page['footer']); ?>
      </h5>
      </div>  <!-- /#footer -->
    <?php endif; ?>

    <div class="col-md-1 ctr">
      <a href="http://www.guidestar.org/organizations/03-0485670/san-antonio-non-profit-council.aspx" target="_blank"><img src="<?php print $base_path ?>sites/default/files/logos/guidestar.png" alt="guidestar" width="130"></a>
    </div>
  </div> <!-- row -->
  <div class="row websiteby">
    <div class="col-md-4 col-md-offset-4 ctr">
      <h6>Web Design by La Boheme Web Consulting</h6>
    </div>
  </div>
</div>


