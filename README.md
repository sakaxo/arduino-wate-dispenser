# Water Detection and Pump Control System

This Arduino project uses an ultrasonic sensor to measure distance and automatically control a pump using a relay module.

## Components Used

* Arduino Board
* Ultrasonic Sensor (HC-SR04)
* Relay Module
* Water Pump
* Jumper Wires

## Pin Connections

| Component              | Arduino Pin |
| ---------------------- | ----------- |
| Ultrasonic Echo Pin    | 7           |
| Ultrasonic Trigger Pin | 2           |
| Relay Module           | 8           |

## How the System Works

1. The ultrasonic sensor sends out sound waves.
2. The sensor measures how long it takes for the sound to bounce back.
3. The Arduino calculates the distance.
4. If the measured distance is less than 10 cm:

   * The relay turns ON.
   * The pump starts working.
5. If the distance is greater than or equal to 10 cm:

   * The relay turns OFF.
   * The pump stops.

## Code Explanation

* `echopin` receives signals from the ultrasonic sensor.
* `trigpin` sends ultrasonic waves.
* `relaypin` controls the relay connected to the pump.

### Distance Calculation

```cpp
long distance = duration * 0.0342 / 2;
```

* `duration` = time taken for the sound wave to return.
* `0.0342` = speed of sound in cm per microsecond.
* Dividing by `2` accounts for the sound traveling to the object and back.

## Condition Used

```cpp
if(distance < 10)
```

If the distance is below 10 cm, the pump turns ON.

## Possible Applications

* Automatic water filling system
* Water level monitoring
* Smart tank system
* Contactless object detection system

## Author

Built using Arduino and Ultrasonic Sensor technology.
