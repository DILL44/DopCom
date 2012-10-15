<?php
/**
 * @file
 * dopcom.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function dopcom_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Menu principal',
    'description' => 'Le <em>menu Principal</em> est fréquemment utilisé pour afficher les sections importantes du site, souvent dans la barre de navigation de haut de page.',
  );
  // Exported menu: menu-menu-adh-rent.
  $menus['menu-menu-adh-rent'] = array(
    'menu_name' => 'menu-menu-adh-rent',
    'title' => 'Menu adhérent',
    'description' => '',
  );
  // Exported menu: menu-menu-secondaire.
  $menus['menu-menu-secondaire'] = array(
    'menu_name' => 'menu-menu-secondaire',
    'title' => 'menu secondaire',
    'description' => 'menu pour tous la communication',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Le <em>menu Principal</em> est fréquemment utilisé pour afficher les sections importantes du site, souvent dans la barre de navigation de haut de page.');
  t('Menu adhérent');
  t('Menu principal');
  t('menu pour tous la communication');
  t('menu secondaire');


  return $menus;
}
