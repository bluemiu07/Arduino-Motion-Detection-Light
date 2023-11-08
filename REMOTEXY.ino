/*
   -- Smart Lights --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP8266_HARDSERIAL_POINT

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 9600
#define REMOTEXY_WIFI_SSID "kump4iot"
#define REMOTEXY_WIFI_PASSWORD "12345678"
#define REMOTEXY_SERVER_PORT 6377


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 61 bytes
  { 255,3,0,0,0,54,0,16,208,1,2,1,21,19,22,11,5,26,31,31,
  79,78,0,79,70,70,0,2,1,21,43,22,11,5,26,31,31,79,78,0,
  79,70,70,0,2,1,21,71,22,11,5,26,31,31,79,78,0,79,70,70,
  0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t LED_1; // =1 if switch ON and =0 if OFF 
  uint8_t LED_2; // =1 if switch ON and =0 if OFF 
  uint8_t LED_3; // =1 if switch ON and =0 if OFF 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#define PIN_LED_1 4
#define PIN_LED_2 5
#define PIN_LED_3 6


void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_LED_1, OUTPUT);
  pinMode (PIN_LED_2, OUTPUT);
  pinMode (PIN_LED_3, OUTPUT);
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  digitalWrite(PIN_LED_1, (RemoteXY.LED_1==0)?LOW:HIGH);
  digitalWrite(PIN_LED_2, (RemoteXY.LED_2==0)?LOW:HIGH);
  digitalWrite(PIN_LED_3, (RemoteXY.LED_3==0)?LOW:HIGH);
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay() 


}
