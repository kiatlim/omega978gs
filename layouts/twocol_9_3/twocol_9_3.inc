<?php

/**
 * Implements hook_panels_layouts().
 */
function pixelonionkit_twocol_9_3_panels_layouts() {
  $items['twocol_9_3'] = array(
    'title' => t('2 Column 9-3'),
    'category' => t('Pixelonionkit'),
    'icon' => 'twocol_9_3.png',
    'theme' => 'twocol_9_3',
    'admin css' => '../panels_admin_12.css',
    'regions' => array(
      'top' => t('Top'),
      'first' => t('First'),
      'second' => t('Second'),
      'bottom' => t('Bottom')
    ),
  );

  return $items;
}
