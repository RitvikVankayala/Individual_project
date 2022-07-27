# DISTANCE SENSING BOT

## OBJECTIVE
  
   The main objective of the bot is to find the distance between an object from a particular position where the ultrasonic sensor that is **HC-SR04**
   
## COMPONENTS

1. Arduino uno
2. Bread board
3. HC-SR04 sensor (ultrasonic sensor)
4. TM 1637       (4 digit display module)

## CONNECTIONS

 ### ULTRASONIC SENSOR:
    
   1. VCC     - 5V OF ARDUINO
   2. TRIG    - DIGITAL PIN 12
   3. ECHO    - DIGITAL PIN 11
   4. GND     - ANY GROUND PIN OF ARDUINO
   
 ### 4-DIGIT DISPLAY MODULE:
  
   1. VCC    - 5V OF ARDUINO
   2. GND    - ANY GROUND PIN OF ARDUINO
   3. CLK    - DIGITAL PIN 2
   4. DIO    - DIGITAL PIN 3
   
 ### ARDUINO UNO:
   
   1. USB PORT   - CONNECTED TO LAPTOP FOR UPLOADING THE CODE USING ARDUINO IDE
   2. POWER JACK - FOR THE POWER SUPPLY
    
    
## WORKING 
  
  After all the connections are made and the code is uploaded now the bot is ready to work. If an object is placed at a distance from the ultrasonic sensor then that distance can be seen from the screen of TM 1637 display that to in cm. The ultrasonic sensors sends the ultrasonic waves which have very high frequency. When they collide with the object they reflect back towards the ultrasonic sensor. It stores the time taken by the wave to return back and hence find the distance between object and sensor. The distance that is found here is passed into an inbuilt function of TM 1637 that can display the distance on its display.In this project I have taken the delay time as 2 seconds for displaying.
    
    
    
    
    
    
    
    
