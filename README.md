# arduino-motion-detection-light
The conducted project is about motion light detection which the led will turn on when any motion from objects or living is detected.
This device is able to switch modes. There are two modes where one mode relies on the motion sensor (auto) and the other requires a person to control the state “on/off” of the lights through mobile application (manual). When auto mode is set, smart lights equipped with sensors can communicate with other lights and exchange information on the sensed ambient conditions to adapt the lighting, otherwise, the configuration for the light state can be done manually via application (remotely) by the connection of internet.

*User manual*
-Materials-
	Arduino UNO R3
	Breadboard
	ESP8266 Serial WiFi Module ESP-01
	PIR Sensor
	Resistors
	Jumper wires
	Male-Female Jumper Wires
	LEDs
	USB Cable
	Arduino IDE 1.8.19
	Remote XY

Optional :
	Mounting Board ( as base )
	Black Board ( for street )
	Straw ( for lights )
	Tape

-Components Assembly-

1.	Assemble LEDs and resistors on the breadboard
   ![image](https://github.com/bluemiu07/arduino-motion-detection-light/assets/101344093/9983aebe-5be1-4d34-88ba-c632f25d2046)
   Once done assembling, connect them to Arduino UNO digital ports using jumper wires.

2.	Adjust PIR sensitivity and delay time
   ![image](https://github.com/bluemiu07/arduino-motion-detection-light/assets/101344093/d73e0a84-b2a1-43e3-96cb-1a8cd5bf395e)

3.	Connect PIR Sensor with Arduino board
   ![image](https://github.com/bluemiu07/arduino-motion-detection-light/assets/101344093/20e3dafa-3d1e-4f98-a081-b628b997bd41)
  Attach male to female jumper wires from PIR pins to the board’s ports accordingly:
  •	GND -GND
  •	High / Low Output -Digital port
  •	+ Power-5v

4.	Connect ESP8266 to Arduino board
   ![image](https://github.com/bluemiu07/arduino-motion-detection-light/assets/101344093/08dbb9bb-ecc3-42d0-b90c-504bef8f10de)
  	 From ESP8266 pins to arduino and breadboard :
    •	RX- TX (Arduino)
    •	3v3- + 18 (Breadboard)
    •	EN- +17 (Breadboard)
    •	TX- RX (Arduino)
    •	GND	- - 6 (Breadboard)

 -The coding-
 1. Paste code (PIRSENSOR) in Arduino IDE
 2. Ensure the board and port selected is right
 3. Upload the code

 -Creating app-
 1.	Go to RemoteXY on browser and click on editor
    ![image](https://github.com/bluemiu07/arduino-motion-detection-light/assets/101344093/24887243-3d36-4ba0-971f-8b2d11c1a1bd)

 2.	Configure all of the necessary things ( switch,module interface,configuration,etc) and click on get source code
   ![image](https://github.com/bluemiu07/arduino-motion-detection-light/assets/101344093/6f2e6da9-dad6-4b1e-aa20-8141b13928d8)

 3.	Follow the intructions stated
    ![image](https://github.com/bluemiu07/arduino-motion-detection-light/assets/101344093/327338f5-bf2c-40b8-9401-94731d983947)


Note : Make you install all the necessary library for Arduino and RemoteXY

Final product : https://www.youtube.com/watch?v=PJjD5pyMQkE
   
