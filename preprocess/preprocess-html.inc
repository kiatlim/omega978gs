<?php

/*

$path = request_path();

function myAddJs($filename, $weight = '101', $scope = 'footer') {
  $jspath = drupal_get_path('theme', 'smu') . '/js/';
  drupal_add_js($jspath . $filename . '.js', array('type' => 'file', 'scope' => $scope, 'weight' => $weight));
}

// Site-wide
myAddJs('shared', '100');

if (drupal_is_front_page()) {
  // Homepage
  myAddJs('homepage');
} elseif ($path == 'about') {
	myAddJs('about');
}

*/

// check the path
// drupal_add_js('alert("Current path: ' . $path . '")', 'inline');

// get full url
// $url = url($_GET['q'], array('absolute' => true));

?>