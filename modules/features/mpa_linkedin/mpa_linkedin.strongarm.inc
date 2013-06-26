<?php
/**
 * @file
 * mpa_linkedin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mpa_linkedin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_consumer_key';
  $strongarm->value = 'nve8e0w9gb3f';
  $export['linkedin_consumer_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_consumer_secret';
  $strongarm->value = 'J1HowtPx4cUYhXch';
  $export['linkedin_consumer_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_liboauth_path';
  $strongarm->value = 'sites/all/modules/oauth/lib/OAuth.php';
  $export['linkedin_liboauth_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_profile_user_page_enabled';
  $strongarm->value = '2';
  $export['linkedin_profile_user_page_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_profile_user_page_linkedin_fields';
  $strongarm->value = array(
    'first-name' => 'first-name',
    'last-name' => 'last-name',
    'headline' => 'headline',
    'location' => 'location',
    'industry' => 'industry',
    'summary' => 'summary',
    'specialties' => 'specialties',
    'interests' => 'interests',
    'picture-url' => 'picture-url',
    'public-profile-url' => 'public-profile-url',
    'id' => 0,
    'honors' => 0,
    'num-recommenders' => 0,
    'member-url-resources' => 0,
    'positions' => 0,
    'educations' => 0,
    'distance' => 0,
    'current-status' => 0,
    'current-status-timestamp' => 0,
    'num-connections' => 0,
    'num-connections-capped' => 0,
    'associations' => 0,
    'phone-numbers' => 0,
    'im-accounts' => 0,
    'twitter-accounts' => 0,
    'date-of-birth' => 0,
    'main-address' => 0,
  );
  $export['linkedin_profile_user_page_linkedin_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_profile_user_page_weight';
  $strongarm->value = '2';
  $export['linkedin_profile_user_page_weight'] = $strongarm;

  return $export;
}
