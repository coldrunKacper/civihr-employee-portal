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
        $links .= civihr_employee_portal_make_link(t('Request TOIL'), 'credit');
        $links .= civihr_employee_portal_make_link(t('Request leave'), 'debit');
        $links .= civihr_employee_portal_make_link(t('Use TOIL'), 'credit_use');

        $links .= '</div>';
        
        return $links;
    }
}