<?php
function synapse_breadcrumb($vars) {
  // No breadcrumbs for this site
  return '';
}

function synapse_format_slideshow($data) {
  $output = '';
  
  $location = 'slideshow-caption-location-' . $data->field_field_slideshow_location[0]['raw']['value'];
  $color = 'slideshow-caption-color-' . $data->field_field_slideshow_color[0]['raw']['value'];
  $image = $data->field_field_slideshow_image[0]['rendered'];
  $nid = 0;

  if (!empty($data->field_field_slideshow_reference[0]['raw']['target_id'])) {
    $nid = $data->field_field_slideshow_reference[0]['raw']['target_id'];
  }
  
  $output .= '<div class="slideshow-slide">';
  if ($nid) {
    $output .= '<a href="$nid">';
  }
  $output .= theme($image['#theme'], array(
    'path' => $image['#path'],
    'item' => $image['#item'],
    'breakpoint_styles' => $image['#breakpoint_styles'],
    'max_style' => $image['#max_style'],
    'fallback_style' => $image['#fallback_style'],
  ));
  
  if ($nid) {
    $output .= '</a>';
  }
  
  $output .= '<div class="slideshow-slide-caption ' . $location . ' ' . $color . '">';
  if (!empty($data->field_field_slideshow_caption[0]['raw']['value'])) {
    $output .= $data->field_field_slideshow_caption[0]['raw']['value'];
  }
  $output .= '</div></div>';
  
  return $output;
}
