<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>

<?php
    
    $total_count = t('No attachments');
    
    $resource_type = isset($row->field_field_resource_type[0])? $row->field_field_resource_type[0]['rendered']['#markup'] : t('No resource type selected!');
    $title = $row->node_title;
    
    // Get the total count of all attachments
    if (isset($row->field_field_attachment) && !empty($row->field_field_attachment[0]['rendered']['#items'])) {
        $total_count = count($row->field_field_attachment[0]['rendered']['#items']);
    }
    
    // Get the download link if we have anything to download
    $download_link = isset($row->field_field_download[0])? l(' ' . $row->field_field_download[0]['rendered']['#text'] . ' (' . $total_count . ')', $row->field_field_download[0]['rendered']['#path'], array('attributes' => array('class' => 'hr-resouce-download-all glyphicon glyphicon-paperclip', 'aria-hidden' => 'true'))) : '';
    
    $custom_output = '<span class="col-md-2"><blockquote>' . $resource_type . '</blockquote></span>
               <span id="resource-modal" class="col-md-8"><strong>' . civihr_employee_portal_make_link($title, 'hr-resource', $row->nid) . '</strong></span>
               <span class="col-md-2">' . $download_link . '</span>';
    
?>

<?php print $custom_output; ?>
