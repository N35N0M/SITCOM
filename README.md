# SITCOM
## [ARDUINO] The Sitcom Machine

_Purpose_: To construct a device that plays a randomly selected tune every time someone walks in the door.

_Goals:_
* Learn basic markdown
* Starting off with a simple project to refresh what little has been learned in the past
* Party factor (a reason in itself)
* Testing git workflow
* Try to have fun and add extra functionality on top of the basic idea.
* Learning how to make the single-board computer Raspberry Pi and the popular microcontroller Arduino Uno talk together.

## Plan
The Sitcom machine will be divided into two functional units:
* Arduino Uno: Will detect a person who is either leaving or entering the room, and report every detection to the raspberry pi through its serial port. Detection is realized in this case with a Ultrasonic Sensor (HC-SR04). 
* Raspberry Pi: When it receives a message from the Uno, it will - in some way or another - choose a tune that it will play through its AUX-port.

The relationship between the two is illustrated in figure 1:

![Figure 1: Drawn schematic front](https://github.com/N35N0M/SITCOM/blob/master/images/Figure1.jpg)
![Figure 2: Drawn schematic side](https://github.com/N35N0M/SITCOM/blob/master/images/Figure2.jpg)
