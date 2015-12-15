# SITCOM
## [ARDUINO] The Sitcom Machine

_Purpose_: To construct a device that plays a randomly selected tune every time someone walks in or out the door.

_Goals:_
* Learn basic markdown
* Starting off with a simple project to refresh what little has been learned in the past
* Party factor (a reason in itself)
* Testing git workflow
* Try to have fun and add extra functionality on top of the basic idea.
* Learning how to make the single-board computer Raspberry Pi and the popular microcontroller Arduino Uno talk together.

## Plan
The Sitcom machine will be divided into two functional units:
* Arduino Uno: Will detect a person who is either leaving or entering the room, and report every detection to the raspberry pi through its serial out port. Detection is realized in this case with a Ultrasonic Sensor (HC-SR04). 
* Raspberry Pi: When it receives a message from the Uno, it will - in some way or another - choose a tune that it will play through its AUX-port. Can also report back to the arduino if need be.

The relationship between the two is illustrated in figure 1:

![Figure 1: Drawn schematic front](https://github.com/N35N0M/SITCOM/blob/master/images/Figure1.jpg)

In our implementation, we wish to make it possible for the system to detect whether the person is entering or leaving home, in order to make the Raspberry Pi play different types of jingles depending on entering/exiting, day/night, first out/last inm etc.

As long as the ultrasonic sensor is mounted correctly, it should be no problem to detect whether the person is moving away or towards the door, as it can record several distance measurements over time. The arduino will use these measurements to decide where the person (or UFO (or UWO)) is headed.
![Figure 2: Drawn schematic side](https://github.com/N35N0M/SITCOM/blob/master/images/Figure2.jpg)
