<?php
/**
 * @file
 * brochure_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function brochure_slideshow_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slideshow_caption' => 0,
    'field_slideshow_reference' => 0,
    'field_slideshow_image' => 0,
    'php' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slideshow_caption' => 0,
    'field_slideshow_reference' => 0,
    'field_slideshow_image' => 0,
    'php' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_slideshow_caption']['id'] = 'field_slideshow_caption';
  $handler->display->display_options['fields']['field_slideshow_caption']['table'] = 'field_data_field_slideshow_caption';
  $handler->display->display_options['fields']['field_slideshow_caption']['field'] = 'field_slideshow_caption';
  $handler->display->display_options['fields']['field_slideshow_caption']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_caption']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slideshow_caption']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_caption']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slideshow_caption']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slideshow_caption']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slideshow_caption']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slideshow_caption']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slideshow_caption']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slideshow_caption']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slideshow_caption']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slideshow_caption']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slideshow_caption']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slideshow_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_caption']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slideshow_caption']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_caption']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slideshow_caption']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slideshow_caption']['field_api_classes'] = 0;
  /* Field: Content: Destination */
  $handler->display->display_options['fields']['field_slideshow_reference']['id'] = 'field_slideshow_reference';
  $handler->display->display_options['fields']['field_slideshow_reference']['table'] = 'field_data_field_slideshow_reference';
  $handler->display->display_options['fields']['field_slideshow_reference']['field'] = 'field_slideshow_reference';
  $handler->display->display_options['fields']['field_slideshow_reference']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_reference']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slideshow_reference']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_reference']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slideshow_reference']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slideshow_reference']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slideshow_reference']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slideshow_reference']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slideshow_reference']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slideshow_reference']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slideshow_reference']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slideshow_reference']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slideshow_reference']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slideshow_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_reference']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slideshow_reference']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_reference']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slideshow_reference']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slideshow_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_slideshow_reference']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_slideshow_reference']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_slideshow_image']['id'] = 'field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['table'] = 'field_data_field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['field'] = 'field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slideshow_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slideshow_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_slideshow_image']['settings'] = array(
    'file_view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_slideshow_image']['field_api_classes'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$image = $data->field_field_slideshow_image[0][\'rendered\'][\'file\'];
$nid = $data->field_field_slideshow_reference[0][\'raw\'][\'target_id\'];
?>
<div class="slideshow-slide">
<a href="<?php print url("node/$nid"); ?>">
  <?php print theme($image[\'#theme\'], array(\'path\' => $image[\'#path\'], \'style_name\' => $image[\'#style_name\'])); ?>
</a>
<div class="slideshow-slide-caption">
  <?php print $data->field_field_slideshow_caption[0][\'raw\'][\'value\']; ?>
</div>
</div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_image' => 'slideshow_image',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['slideshow'] = $view;

  return $export;
}
