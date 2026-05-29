// (c) 2020 University of Plymouth
// Nicholas Outram
// nicholas.outram@plymouth.ac.uk
//
//
// Added support for SPL06-001 environmental sensor
// updated 14 09 2021

#ifndef __UOP_MSB__
#define __UOP_MSB__

#include "MSB_Config.h"
#include "Buttons.h"
#include "LatchedLED.h"
#include "Buzzer.h"
#include "LCD.h"
#include "EnvSensor.h"
#include "MotionSensor.h"
#include "MSB_Utils.h"
#include "Matrix.h"
#include "TrafficLights.h"


// SD Card (RTOS ONLY)
#ifdef USE_SD_CARD  //RTOS Only
#include "SDCard.h"
extern SDCard sd;
#endif

// Precreated library objects for you to use
extern AnalogIn pot;
extern AnalogIn ldr;
extern AnalogIn signal_in;
extern AnalogIn mic;
extern AnalogOut dac_out_1;
extern AnalogOut dac_out_2;
extern LatchedLED latchedLEDs;     
extern Buttons buttons;
extern LCD_16X2_DISPLAY lcd;
extern LCD_16X2_DISPLAY& disp;
extern EnvSensor env;
extern Buzzer buzz;
extern DIPSwitches dipSwitches;
extern MotionSensor motion;
extern Matrix matrix;
extern TrafficLights traffic;
#endif
