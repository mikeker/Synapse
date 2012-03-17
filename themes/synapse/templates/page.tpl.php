<div id="container" class="clearfix container">

  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    <?php if ($main_menu): ?>
      <a href="#navigation" class="element-invisible element-focusable"><?php print t('Skip to navigation'); ?></a>
    <?php endif; ?>
  </div>

  <div id="header-container"><div class="row"><header id="header" role="banner" class="clearfix span12">
	<?php if ($logo): ?>
      <a class="hidden-phone" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" id="logo">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
    <?php endif; ?>
    <?php if ($site_name || $site_slogan): ?>
      <hgroup id="site-name-slogan">
        <?php if ($site_name): ?>
          <h1 class="visible-phone" id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>
        <?php if ($site_slogan): ?>
          <h2 class="hidden-phone" id="site-slogan"><?php print $site_slogan; ?></h2>
        <?php endif; ?>
      </hgroup>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header></div></div> <!-- /#header -->
  <div id="navigation-container"><div class="row"><nav id="navigation" role="navigation" class="clearfix">
    <div class="navbar"><div class="navbar-inner"><div class="container"> <?php // Needed for Bootstrap ?>
		  <?php print theme('links__system_main_menu', array(
            'links' => $main_menu,
            'attributes' => array(
              'id' => 'main-menu',
              'class' => array('links', 'clearfix', 'nav'),
            ),
            'heading' => array(
              'text' => t('Main menu'),
              'level' => 'h2',
              'class' => array('element-invisible'),
            ),
          )); ?>
		  <?php print theme('links__system_secondary_menu', array(
            'links' => $secondary_menu,
            'attributes' => array(
              'id' => 'secondary-menu',
              'class' => array('links', 'clearfix'),
            ),
            'heading' => array(
              'text' => t('Secondary menu'),
              'level' => 'h2',
              'class' => array('element-invisible'),
            ),
          )); ?>
      <?php // endif; ?>
    </div></div></div>  <?php // Needed for Bootstrap ?>
  </nav></div></div> <!-- /#navigation -->

  <?php if ($breadcrumb): print $breadcrumb; endif;?>

  <div id="main-container"><div class="row">
    <section id="main" role="main" class="clearfix span9">
      <?php print $messages; ?>
      <a id="main-content"></a>
      <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php if (!empty($tabs['#primary'])): ?><div class="tabs-wrapper clearfix"><?php print render($tabs); ?></div><?php endif; ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
      <?php print render($page['content']); ?>
    </section> <!-- /#main -->

    <?php if ($page['sidebar_first']): ?>
      <aside id="sidebar-first" role="complementary" class="sidebar clearfix">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>

    <?php if ($page['sidebar_second']): ?>
      <aside id="sidebar-second" role="complementary" class="sidebar clearfix span3">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>
  </div></div>

  <div id="footer-container"><div class="row"><footer id="footer" role="contentinfo" class="clearfix span12">
    <?php print render($page['footer']) ?>
    <?php print $feed_icons ?>
  </footer></div></div> <!-- /#footer -->

</div> <!-- /#container -->
