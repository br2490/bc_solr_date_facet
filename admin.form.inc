<?php
/**
 * @file
 * Adminstration page callback for the Solr date facet config
 */

/**
 * Defines the admin settings form.
 *
 * @return array
 *   The Drupal form definition.
 */
function bc_solr_date_facet_admin_settings() {
  $form['bc_solr_date_facet_format'] = array(
      '#type' => 'textfield',
      '#title' => t('PHP date format that Solr should use for the date facet.'),
      '#default_value' => variable_get('bc_solr_date_facet_format', 'Y/m/d'),
      '#description' => t('<strong>Only accepts: day, month, and year format characters of d/j m/n Y/y.</strong> <br /><a target=_new href="http://php.net/manual/en/function.date.php#refsect1-function.date-parameters">PHP Date Format documentation.</a> <br />Format preview: '. Date(variable_get('bc_solr_date_facet_format', 'Y/m/d'))),
    );
  return system_settings_form($form);
}

// Too lazy to validate, leh sigh.
// function bc_solr_date_facet_admin_settings_validate($form, &$form_state) {
//   // Do things...
// }