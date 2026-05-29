
//! @file 	MSB_Config.h
//! @author Plymouth University EEER
//! @date 	10/05/24
//! @brief 	Config File for Module Support Board Library


#define V2  2
#define V4A 4
#define V4B 4
#define V4C 4
#define V4D 5

// ******************************************** IMPORTANT ********************************************
// *             Set the value below to match the board version you are using                        *
// ******************************************** IMPORTANT ********************************************

#define MSB_VER V4D
//#define MSB_VER V2
//#define MSB_VER V4A
//#define MSB_VER V4B
//#define MSB_VER V4C
//#define MSB_VER V4D

// If you do not wish to use the SD Card, comment this line out
#define USE_SD_CARD

// This will automatically add the correct header file 
// depending on which target board has been selected or detected 
#ifdef TARGET_NUCLEO_F429ZI
    #include "TARGET_F4.h"
#elif defined (TARGET_NUCLEO_F439ZI)
    #include "TARGET_F4.h"
#elif defined (TARGET_NUCLEO_H7A3ZI_Q)   
    #include "TARGET_H7.h"
#else
    assert("Unsupported Board Selected")
#endif



