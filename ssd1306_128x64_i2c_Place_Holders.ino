/*********************************************************************
This is an example for our Monochrome OLEDs based on SSD1306 drivers

  Pick one up today in the adafruit shop!
  ------> http://www.adafruit.com/category/63_98

This example is for a 128x32 size display using I2C to communicate
3 pins are required to interface (2 I2C and one reset)

Adafruit invests time and resources providing this open source code, 
please support Adafruit and open-source hardware by purchasing 
products from Adafruit!

Written by Limor Fried/Ladyada  for Adafruit Industries.  
BSD license, check license.txt for more information
All text above, and the splash screen must be included in any redistribution
=====================================================================
=====================================================================
/////////////////////////////////////////////////////////////////////
         PLEASE READ THIS

Working Code (IN PART adapted and IN PART created by Gary 
10Dof.technology      ENJOY !!!!!   :)

The idea is that we can use this as a base to build on.
The code is not perfect
The code does not have all the options included
The cade can be ( and I hope will be ) improved BY YOU !!!!!

Adafruit did a great job with the library and in the full packet there are more examples to chose from.
Here we have taken a few of the more simple code examples and added to them in a way we hope are easy to follow
and easy to build on and MOST IMPORTANTLY to learn from....
*********************************************************************/

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

//=============================ERROR MESSAGE !!!===========================
#if (SSD1306_LCDHEIGHT != 32)                                  // Parameters for Screen Size ERROR !!!
#error("Height incorrect, please fix Adafruit_SSD1306.h!");    // Display this error message if the screen size is not as it should be. Go into libraries folder, find in the Adafruit_SSD1306.h 
                                                               // file the section at the start that asks you to 'comment OR uncomment' the relevant section of code for your display size. SAVE the
                                                               // file and open the sketch again with the new information availale in the .h file and try again. :)
#endif



void setup()   
{
                  
  Serial.begin(9600);                     // Start Serial Comms

  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 128x32)
  // init done
  
  // Show image buffer on the display hardware.
  // Since the buffer is intialized with an Adafruit splashscreen
  // internally, this will display the splashscreen.
  display.display();                         // Put on the screed the information held ready to be displayed
  delay(1000);                               // Keep it there for 1000 mS
  //   Clear the buffer.
  display.clearDisplay();                    // Clear the screen
  display.setTextSize(2);                    // Start putting together new text at size 2 ( size 3 is too big for most hings, size one is good for some and two was just right for this )
   display.setTextColor(WHITE);              // We will use white to be on the black and this is a black and white display
    display.setCursor(0,9);                  // start writing at colum 0, Row 9 ( Left hand side, 9 rows down from the top )
     display.println(" And 10DoF");          // Display yhe text between BUT noit including the "". Here using clear spaces before and or after the text can be used to space things as you like
       display.display();                    // Put on the screed the information held ready to be displayed   
  delay(3000);                               // Keep it there for 3000 mS
  display.clearDisplay();
    display.clearDisplay();
  display.setTextSize(2);
   display.setTextColor(WHITE);
    display.setCursor(0,9);
     display.println("Bring You"); 
       display.display();   
  delay(3000);




//==========================================Everything drawn to here is cleared============================================



    display.clearDisplay();           // Clears the display completely to make sure nothing of the old information stays when the new is displayed

  display.setTextSize(1);            // Text size varies. Try changing it to a '2' or maybe '3' then reload the sketch ( Code )
    display.setTextColor(WHITE);       // On this display we have only the options BLACK OR WHITE. because the background is Black we have to use white to see anything :)
      display.setCursor(22,0);           // The first number is the amount of pixels from the left hand side. The second number the amount of pixels from the top
        display.println("Place");  // The text we want to see displayed
  display.setTextSize(1);
    display.setTextColor(WHITE);
      display.setCursor(25,13);
        display.println("Holders");
        
    display.fillCircle(display.width()/5, display.height()/8*7, 2, WHITE);      // Next Pages will be with large (4) pix dot moved along one more space
       display.fillCircle(display.width()/5*2, display.height()/8*7, 1, WHITE);
         display.fillCircle(display.width()/5*3, display.height()/8*7, 1, WHITE);
           display.fillCircle(display.width()/5*4, display.height()/8*7, 1, WHITE);
             display.display();
 

     display.fillCircle(display.width()/5, display.height()/8*7, 1, WHITE);
       display.fillCircle(display.width()/5*2, display.height()/8*7, 2, WHITE);      // Next Pages will be with large (4) pix dot moved along one more space
         display.fillCircle(display.width()/5*3, display.height()/8*7, 1, WHITE);
           display.fillCircle(display.width()/5*4, display.height()/8*7, 1, WHITE);
             display.display(); 


     display.fillCircle(display.width()/5, display.height()/8*7, 1, WHITE);
       display.fillCircle(display.width()/5*2, display.height()/8*7, 1, WHITE);
         display.fillCircle(display.width()/5*3, display.height()/8*7, 2, WHITE);      // Next Pages will be with large (4) pix dot moved along one more space
           display.fillCircle(display.width()/5*4, display.height()/8*7, 1, WHITE);
             display.display(); 


     display.fillCircle(display.width()/5, display.height()/8*7, 1, WHITE);
       display.fillCircle(display.width()/5*2, display.height()/8*7, 1, WHITE);
         display.fillCircle(display.width()/5*3, display.height()/8*7, 1, WHITE);
           display.fillCircle(display.width()/5*4, display.height()/8*7, 2, WHITE);      // Next Pages will be with large (4) pix dot moved along one more space
             display.display(); 
               delay(3000);
                 display.clearDisplay(); 

 

}//=========END SETUP======================================================================
//==========EVERYTHING ABOVE THIS LINE SHOWS JUST ONCE ( Unless you call it again )============================




//=============================*********MAIN LOOP**********===============================
void loop() {

}  // ================  END MAIN LOOP =======================





    






