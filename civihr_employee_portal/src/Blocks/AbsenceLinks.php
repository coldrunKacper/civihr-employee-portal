<?php

namespace Drupal\civihr_employee_portal\Blocks;

class AbsenceLinks {
    
    /**
     * Absence request html modal links
     * @return string
     */
    public function generateBlock() {
        
        ctools_include('modal');
        ctools_modal_add_js();
        
        // Create our own javascript that will be used to theme a modal.
        $civihr_style = array(
            'civihr-default-style' => array(
                'modalSize' => array(
                    'type' => 'fixed',
                    'width' => 550,
                    'height' => 500,
                ),
                'modalOptions' => array(
                    'opacity' => .5,
                    'background-color' => '#000',
                ),
                'animation' => 'fadeIn',
            ),
        );
        
        drupal_add_js($civihr_style, 'setting');

        $links = '';
        $links .= '<div id="absence-links" class="list-group" style="height: 50px;">';
        $links .= civihr_employee_portal_make_link('Request leave', 'debit');
        $links .= civihr_employee_portal_make_link('Apply for credits', 'credit');
        $links .= civihr_employee_portal_make_link('Open calendar', 'calendar');
        
        $links .= '</div>';
        
        return $links;
    }
}