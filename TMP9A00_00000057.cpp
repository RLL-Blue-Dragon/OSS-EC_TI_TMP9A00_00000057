// License       : License.txt
// Specifications: Spec-00000057.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : TMP9A00_00000057.cpp
// BSL              : 00000057
// Model number     : Texas Instruments TMP9A00-EP
// Spec               Component type       : ADC
//                    OS                   : Arduino
//                    Calculation          : Floating-point
//                    Conversion type      : Linear
//                    Moving average filter: Moving average filter select
//                    Diagnosis            : Range (Min to Max)
// Reason for change: 01.00.00 : 01/11/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#include "TMP9A00.h"

// Main Function
pp2ap_adc_t TMP9A00_00000057( void )
{
        pp2ap_adc_t res = pp_00000057( tbl_TMP9A00 );
        return( res );
}
