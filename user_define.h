// License       : License.txt
// Specifications: Spec-00000057.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : user_define.h
// BSL              : 00000057
/*-- File Header Comment End -------------------------------------------------*/

#ifndef __USER_DEFINE_H__
#define __USER_DEFINE_H__

#include "Arduino.h"
#include "oss_ec_00000057.h"

#define iADC_bit                10U                             // MPU ADC bit
#define iADC_vdd                3.3F                            // MPU Vdd Configures the reference voltage [V]
#define iVref                   DEFAULT                         // Configures the reference voltage
                                                                // DEFAULT: the default analog reference of 5 volts (on 5V Arduino boards) 
                                                                //          or 3.3 volts (on 3.3V Arduino boards)
#define iTMP9A00_pin            A0                              // ADC pin

// Moving average filter select
#define iMA                     iNonMA                          // Non-moving average filter
//#define iMA                     iSMA                            // Simple moving average filter
//#define iMA                     iEMA                            // Exponential moving average filter
//#define iMA                     iWMA                            // Weighted moving average filter

//#define iTMP9A00_SMA_num        4U                              // Simple moving average number & buf size
//#define iTMP9A00_EMA_K          0.75F                           // Exponential Smoothing Factor
//#define iTMP9A00_WMA_num        3U                              // Weighted moving average number & buf size

#define iTMP9A00_ma             iMA                             // Moving average select

#endif /*__USER_DEFINE_H__*/
