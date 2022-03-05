# SmartBricks
LEGO_mini_plate
The version is designed for a 4x4 tile

LEGO_plate_mini.ino - the main program
MPR_connections.ino - connecting with touch and color sensors
cap_1.ino - displaying data from the first sensor
cap_2.ino - displaying data from the second sensor
color.ino - perform a color scan and decode RGB values
location.ino - locate the pin for spike detection
decoding.ino - decoding the location.ino number from the pin to the XY coordinates

| Color  |No.|               
| ------ | - |               
| Red    | 1 |
| Blue   | 2 |
| Grey   | 3 |               
| Orange | 4 |               
| Yellow | 5 |

Touch sensor addresses - 0x5C, 0x5A
Touch detection threshold: 150

Pin functions
pin 10 - adding / removing bricks
pin 8 - color detection
