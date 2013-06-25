<?php
/**
 * @file
 * mpa_glossary.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mpa_glossary_taxonomy_default_vocabularies() {
  return array(
    'mpa_glossary' => array(
      'name' => 'MPA_Glossary',
      'machine_name' => 'mpa_glossary',
      'description' => 'Major Project Authority Glossary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
