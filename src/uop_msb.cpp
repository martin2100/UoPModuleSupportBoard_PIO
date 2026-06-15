#ifndef USE_ORIG_UOP_MSB_LIB

#include "uop_msb.h"


// SD Card (RTOS ONLY)
#ifdef USE_SD_CARD  //RTOS Only
SDCard sd(SD_MOSI,SD_MISO,SD_SCLK,SD_CS,SD_DETECT);
#endif

// Precreated library objects for you to use
AnalogIn pot(AN_POT_PIN);
AnalogIn ldr (AN_LDR_PIN);
AnalogIn signal_in (BNC_AN_PIN);
AnalogIn mic (MIC_AN_PIN);
AnalogOut dac_out_1 (DAC1_AN_PIN);
AnalogOut dac_out_2 (DAC2_AN_PIN);
LatchedLED latchedLEDs(LEDMODE::STRIP);     
Buttons buttons;
LCD_16X2_DISPLAY lcd;
LCD_16X2_DISPLAY& disp = lcd;
EnvSensor env (ENV_MOSI,ENV_MISO,ENV_SCLK,ENV_CS);
Buzzer buzz;
DIPSwitches dipSwitches (DIP0_PIN,DIP1_PIN,DIP2_PIN,DIP3_PIN);
MotionSensor motion (MEMS_SDA,MEMS_SCL,MEMS_FREQ);
Matrix matrix (MATRIX_MOSI,MATRIX_MISO,MATRIX_SCLK,MATRIX_CS,MATRIX_OE);
TrafficLights traffic(TRAF_RED1_PIN,TRAF_YEL1_PIN,TRAF_GRN1_PIN,TRAF_RED2_PIN,TRAF_YEL2_PIN,TRAF_GRN2_PIN,TRAF_WHITE_PIN);

#endif
