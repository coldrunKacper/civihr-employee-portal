<?php

namespace Drupal\civihr_employee_portal\Blocks;

class ManagerCalendar {
    
    /**
     * Manager calendar output block
     * @return string
     */
    public function generateBlock() {
        
        global $user;
        $current_year = date('Y');
        
        $calendar_tables = array();
        
        $months_data = array();
        
        $uid = $user->uid;
        $result = db_query('SELECT aal.employee_id, aal.id, aal.activity_type_id, aal.absence_title, aal.duration, aal.absence_start_date_timestamp, aal.absence_end_date_timestamp, absence_status
        FROM {absence_approval_list} aal WHERE aal.drupal_uid = :uid', array(':uid' => $user->uid));
        
        // Result is returned as a iterable object that returns a stdClass object on each iteration
        foreach ($result as $record) {
            
            $check_start_month = intval(date('n', $record->absence_start_date_timestamp + 3600)); // 1-12
            $check_end_month = intval(date('n', $record->absence_end_date_timestamp + 3600)); // 1-12
            $check_start_day = intval(date('d', $record->absence_start_date_timestamp + 3600));
            $check_end_day = intval(date('d', $record->absence_end_date_timestamp + 3600));
            
            if ($check_start_month == $check_end_month) {
                $months_data[$check_start_month][$check_start_day][$record->employee_id][$record->id] = array(
                                                                                                            'name' => get_civihr_contact_data($record->employee_id)['display_name'], 
                                                                                                            'title' => $record->absence_title,
                                                                                                            'type' => $record->activity_type_id,
                                                                                                            'start_month' => $check_start_month, 
                                                                                                            'end_month' => $check_end_month, 
                                                                                                            'start_day' => $check_start_day,
                                                                                                            'end_day' => $check_end_day,
                                                                                                            'duration' => $record->duration <= 480 ? $record->duration / (6 * 80) . ' day' : $record->duration / (6 * 80) . ' days'
                                                                                                        );
            }
            else {
                 
                $months_difference = abs($check_end_month - $check_start_month);
                
                for ($num_of_iterations = 0; $num_of_iterations <= $months_difference; $num_of_iterations++) {
                    
                    $new_end_month = $check_start_month + $num_of_iterations;
                    $new_end_day = cal_days_in_month(CAL_GREGORIAN, $new_end_month, $current_year);
                    
                    if ($num_of_iterations == $months_difference) {
                        $new_end_day = $check_end_day;
                    }
                    
                    if ($num_of_iterations == 0) {
                        $new_start_day = $check_start_day;
                        
                    }
                    else {
                        $new_start_day = 1;
                        
                    }
                    
                    $months_data[$check_start_month+$num_of_iterations][$new_start_day][$record->employee_id][$record->id] = array(
                                                                                                                                'name' => get_civihr_contact_data($record->employee_id)['display_name'], 
                                                                                                                                'title' => $record->absence_title,
                                                                                                                                'type' => $record->activity_type_id, 
                                                                                                                                'start_month' => $check_start_month + $num_of_iterations, 
                                                                                                                                'end_month' => $new_end_month, 
                                                                                                                                'start_day' => $new_start_day,
                                                                                                                                'end_day' => $new_end_day,
                                                                                                                                'duration' => $record->duration <= 480 ? $record->duration / (6 * 80) . ' day' : $record->duration / (6 * 80) . ' days'
                                                                                                                            );
                    
                }
               
            }
            
 
        }
        
        // Loop from current month backwards to January (optionally to set some more specific filters)
        for ($month = 12; $month > 0; $month--) {
            
            $num_days_month = cal_days_in_month(CAL_GREGORIAN, $month, $current_year);
              
            // Header
            $header = array(t("Employee name"));

            // If the month exist in the months_data array display the values
            if (isset($months_data[$month])) {
                
                $rows = array();
                                
                for ($i = 0; $i < $num_days_month; $i++) {

                    $s = $i+1;
                    $header[] = $s;
                       
                        foreach ($months_data[$month] as $employee) {
                            
                            
                            foreach ($employee as $activities) {
                                foreach ($activities as $key_ac => $activity) {
                                    
                                    $rows[$key_ac][0] = '<div class="' . $activity['name'] . '">' . $activity['name'] . '</div>';
                                    
                                    if ($activity['start_month'] == $activity['end_month']) {
                                        if ($s >= $activity['start_day'] && $s <= $activity['end_day']) {
                                            $rows[$key_ac][$s] = '<div class="' . '_' . $activity['type'] . '"><div class="views-tooltip" tooltip-content="' . $activity['title'] . ': ' . $activity['duration'] . '">'  . date('D', strtotime($current_year . '/' . $activity['start_month'] . '/' . $s)) . '</div></div>';
                                        }
                                        else {
                                            $rows[$key_ac][$s] = '';
                                        }
                                    }
                                    
                                }
                            }
                        
                        }
                     

                }
               
                $month_name = date('F', mktime(0, 0, 0, $month, 10)); // March

                $calendar_tables[]['title'] = $month_name . ' ' . $current_year;
                $calendar_tables[]['data'] = theme('table', array('header' => $header, 'rows' => $rows));
                
            }
           

        }
        
        $block = module_invoke('calendar', 'block_view', 'calendar_legend');
                
        // Output the themed calendar
        return theme('civihr_employee_portal_manager_calendar_block', 
            array(
                'calendar_output' => $calendar_tables,
                'calendar_legend' => render($block['content'])
            )
        );
    }
}