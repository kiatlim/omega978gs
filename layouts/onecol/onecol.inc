<?php

/**
 * Implements hook_panels_layouts()
 */
function pixelonionkit_onecol_panels_layouts() {
  $items['onecol'] = array(
    'title' => t('1 Column'),
    'category' => t('Pixelonionkit'),
    'icon' => 'onecol.png',
    'theme' => 'onecol',
    'admin css' => '../panels_admin_12.css',
    'regions' => array(
      'top' => t('Top'),
      'first' => t('First'),
      'bottom' => t('Bottom')
    ),
  );

  return $items;
}

