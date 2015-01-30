<?php
/*
* This helper function returns an array of clusters and their acronyms.
*/

function _hr_google_service_account_cluster_acronyms() {
  $cluster_acronyms = array(
    'CCM' => 'Camp Coordination Management',
    'ERY' => 'Early Recovery',
    'EDU' => 'Education',
    'SHE' => 'Emergency Shelter and NFI',
    'FSC' => 'Food Security',
    'HEA' => 'Health',
    'LOG' => 'Logistics',
    'NUT' => 'Nutrition',
    'PRO' => 'Protection',
    'PRO-CPN' => 'Child Protection',
    'PRO-GBV' => 'Gender Based Violence',
    'PRO-HLP' => 'Housing, Land and Property',
    'PRO-MIN' => 'Mine Action',
    'WSH' => 'Water Sanitation Hygiene',
  );
  return $cluster_acronyms;
}

/**
* Helper function to return the cluster acronym given a cluster name.
*/

function _hr_google_service_account_get_cluster_acronym($cluster_name) {
  $cluster_acronyms = _hr_google_service_account_cluster_acronyms();
  if(in_array($cluster_name, $cluster_acronyms)){
    $acronym = array_search($cluster_name, $cluster_acronyms);
    return $acronym;
  }
}