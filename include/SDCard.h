
#include "mbed.h"
#include "MSB_Config.h"

#if __has_include("SDBlockDevice.h")
    #include "SDBlockDevice.h"
#else
    #error  Error including SDBlockDevice for SDCard library. Have you forgotten to copy the mbed_app.json file to project root, or comment out USING_SD_CARD in MSB_Config.h?
#endif

#include "FATFileSystem.h"

class SDCard{
    private:
        SDBlockDevice sd;
        DigitalIn sd_detect;
    public:
        // Constructor
        SDCard(PinName mosi,PinName miso,PinName sclk,PinName cs, PinName detect);
        // Write's test data to a file
        int write_test();
        // Reads data from the test file and prints to terminal
        int read_test();
        // Write data from an array to a file
        int write_file(char* filename, char* text_to_write,bool append = true, bool print_debug = true);
        // Reads the data from a file and prints it to the terminal
        int print_file(char* filename,bool print_debug = true);
        // Reads data from a file and copies it to an array
        int copy_file(char* filename, char* dest, int dest_size, bool print_debug = true);

        bool card_inserted();
        void format();

};

