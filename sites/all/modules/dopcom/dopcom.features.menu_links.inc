<?php
/**
 * @file
 * dopcom.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dopcom_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accueil',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:l-equipe
  $menu_links['main-menu:l-equipe'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'l-equipe',
    'router_path' => 'l-equipe',
    'link_title' => 'L\'équipe',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/2
  $menu_links['main-menu:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Qui sommes nous',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:partenaires
  $menu_links['main-menu:partenaires'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'partenaires',
    'router_path' => 'partenaires',
    'link_title' => 'partenaires',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-menu-adh-rent:admin/structure/taxonomy/partenaire/add
  $menu_links['menu-menu-adh-rent:admin/structure/taxonomy/partenaire/add'] = array(
    'menu_name' => 'menu-menu-adh-rent',
    'link_path' => 'admin/structure/taxonomy/partenaire/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'ajouter un partenaire',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-menu-adh-rent:node/add/article
  $menu_links['menu-menu-adh-rent:node/add/article'] = array(
    'menu_name' => 'menu-menu-adh-rent',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'créer un article',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-menu-adh-rent:node/add/evenement
  $menu_links['menu-menu-adh-rent:node/add/evenement'] = array(
    'menu_name' => 'menu-menu-adh-rent',
    'link_path' => 'node/add/evenement',
    'router_path' => 'node/add/evenement',
    'link_title' => 'créer un évènement',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-menu-adh-rent:node/add/simplenews
  $menu_links['menu-menu-adh-rent:node/add/simplenews'] = array(
    'menu_name' => 'menu-menu-adh-rent',
    'link_path' => 'node/add/simplenews',
    'router_path' => 'node/add/simplenews',
    'link_title' => 'rédiger une newsletter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-menu-secondaire:blog
  $menu_links['menu-menu-secondaire:blog'] = array(
    'menu_name' => 'menu-menu-secondaire',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-menu-secondaire:calendrier
  $menu_links['menu-menu-secondaire:calendrier'] = array(
    'menu_name' => 'menu-menu-secondaire',
    'link_path' => 'calendrier',
    'router_path' => 'calendrier',
    'link_title' => 'Evenement',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-menu-secondaire:contact
  $menu_links['menu-menu-secondaire:contact'] = array(
    'menu_name' => 'menu-menu-secondaire',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-menu-secondaire:forum
  $menu_links['menu-menu-secondaire:forum'] = array(
    'menu_name' => 'menu-menu-secondaire',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forum',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Accueil');
  t('Blog');
  t('Contact');
  t('Evenement');
  t('Forum');
  t('L\'équipe');
  t('Qui sommes nous');
  t('ajouter un partenaire');
  t('créer un article');
  t('créer un évènement');
  t('partenaires');
  t('rédiger une newsletter');


  return $menu_links;
}
