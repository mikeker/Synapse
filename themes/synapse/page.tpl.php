<div id="container" class="clearfix">

  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    <?php if ($main_menu): ?>
      <a href="#navigation" class="element-invisible element-focusable"><?php print t('Skip to navigation'); ?></a>
    <?php endif; ?>
  </div>

  <header id="header" role="banner" class="clearfix"><div id="header-inner" class="inner">
	<?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" id="logo">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
    <?php endif; ?>
    <?php if ($site_name || $site_slogan): ?>
      <hgroup id="site-name-slogan">
        <?php if ($site_name): ?>
          <h1 id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>
        <?php if ($site_slogan): ?>
          <h2 id="site-slogan"><?php print $site_slogan; ?></h2>
        <?php endif; ?>
      </hgroup>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </div></header> <!-- /#header -->

  <?php if ($main_menu || $secondary_menu || !empty($page['navigation'])): ?>
    <nav id="navigation" role="navigation" class="clearfix"><div id="navigation-inner" class="inner">
      <?php if (!empty($page['navigation'])): ?> <!--if block in navigation region, override $main_menu and $secondary_menu-->
        <?php print render($page['navigation']); ?>
      <?php endif; ?>
      <?php if (empty($page['navigation'])): ?>
        <?php print theme('links__system_main_menu', array(
              'links' => $main_menu,
              'attributes' => array(
                'id' => 'main-menu',
                'class' => array('links', 'clearfix'),
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
      <?php endif; ?>
    </div></nav> <!-- /#navigation -->
  <?php endif; ?>

  <section id="main" role="main" class="clearfix"><div id="main-inner" class="inner clearfix">
    <?php print $messages; ?>
    <?php if ($breadcrumb): print $breadcrumb; endif;?>
    <a id="main-content"></a>
    <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php if (!empty($tabs['#primary'])): ?><div class="tabs-wrapper clearfix"><?php print render($tabs); ?></div><?php endif; ?>
    <?php print render($page['help']); ?>
    <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
    <?php print render($page['content']); ?>

    <?php if ($page['sidebar_first']): ?>
      <aside id="sidebar-first" role="complementary" class="sidebar clearfix">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>

    <?php if ($page['sidebar_second']): ?>
      <aside id="sidebar-second" role="complementary" class="sidebar clearfix">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

    <?php if (!empty($page['main_bottom_left']) || !empty($page['main_bottom_middle']) || !empty($page['main_bottom_right'])) : ?>
      <div id="main-bottom">
        <div id="main-bottom-left">
          <?php if (!empty($page['main_bottom_left'])) { print render($page['main_bottom_left']); }?>
        </div>
        <div id="main-bottom-middle">
          <?php if (!empty($page['main_bottom_middle'])) { print render($page['main_bottom_middle']); }?>
        </div>
        <div id="main-bottom-right">
          <?php if (!empty($page['main_bottom_right'])) { print render($page['main_bottom_right']); }?>
        </div>
      </div>
    <?php endif;?>
  </div></section> <!-- /#main -->

  <footer id="footer" role="contentinfo" class="clearfix"><div id="footer-inner" class="inner">
    <?php print render($page['footer']) ?>
    <?php print $feed_icons ?>
  </div></footer> <!-- /#footer -->

</div> <!-- /#container -->
