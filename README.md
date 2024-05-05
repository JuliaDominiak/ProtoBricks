# ProtoBricks
## code_brickPlate_4x4<br />
The version is designed for a 4x4 tile<br />

 * **Brickplate_mini.ino** - the main program<br />
 * **MPR_connections.ino** - connecting with touch and color sensors<br />
 * **cap_1.ino** - displaying data from the first sensor<br />
 * **cap_2.ino** - displaying data from the second sensor<br />
 * **color.ino** - perform a color scan and decode RGB values<br />
 * **location.ino** - locate the pin for spike detection<br />
 * **decoding.ino** - decoding the location.ino number from the pin to the XY coordinates<br />

| Color  |No.|               
| ------ | - |               
| Red    | 1 |
| Blue   | 2 |
| Grey   | 3 |               
| Orange | 4 |               
| Yellow | 5 |
| Green  | 6 |

Touch sensor addresses - 0x5C, 0x5A<br />
Touch detection threshold: 150<br />

Pin functions<br />
pin 10 - adding / removing bricks<br />
pin 8 - color detection<br />


