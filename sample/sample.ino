// License       : License.txt
// Specifications: Spec-00000057.pdf

// Include the header
#include "TMP9A00.h"                            // Using TMP9A00-EP library
#include <Arduino_FreeRTOS.h>                   // Using FreeRTOS multi-tasking in Arduino

// Immediate defines
#define iPCMP_Cyc   1000U/portTICK_PERIOD_MS    // Sensor Read Cycle [ ms/bit ]

// Define Task for Sensor aplication
void ap( void* pvParameters );
pp2ap_adc_t TMP9A00_00000057( void );

// Program code section
void setup()
{
        // Initialize library
        adc_ini();

        // Now set up Task to run independently.
        xTaskCreate
        (
            ap                                  // Function that should be called
            ,  "ap"                             // Name of the task (for debugging)
            ,  configMINIMAL_STACK_SIZE         // Stack size : This stack size can be checked & adjusted
            ,  NULL                             // Parameters for the task
            ,  1                                // Priority : with 3 (configMAX_PRIORITIES - 1) being the highest, and 0 being the lowest.
            ,  NULL                             // Task Handle
        );
        // Now the task scheduler, which takes over control of scheduling individual tasks, is automatically started.
}

void loop()
{
        // put your main code here, to run repeatedly:
}

// Sensor Application Task
void ap( void* pvParameters )
{
        pp2ap_adc_t   sensor;
        float         temperature;              // Temperature [degree celsius]
        unsigned long diagnosis;                // Diagnosis result : Normal=iNormal,Max NG=iMax_NG,Min NG=iMin_NG
        
        // TMP9A00 sensor read
        do{
                // Read of Temperature Sensor
                sensor = TMP9A00_00000057();
                
                temperature = sensor.phy;
                diagnosis   = sensor.sts;
                
                // Sensor Application
                // Application cycle wait
                vTaskDelay( iPCMP_Cyc );
        }while(true);
}
