<?php

/**
 * Implements hook_panels_layouts().
 */
function pixelonionkit_twocol_nogrid_panels_layouts() {
  $items['twocol_nogrid'] = array(
		'title' => t('2 Column (No grid)'),
    'category' => t('Pixelonionkit'),
    'icon' => 'twocol_nogrid.png',
    'theme' => 'twocol_nogrid',
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
