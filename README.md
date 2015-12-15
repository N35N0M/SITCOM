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

## Research
Several implementations of a Sitcom Machine already exist. 

Some examples include:
* Vimeo user Jordan Burnett uses [some variation of a laser trap to trigger the applause.](https://vimeo.com/41861362)
* Youtube user caliixxs uses [an IR-motion sensor and a wave shield on the arduino to play audio.](https://www.youtube.com/watch?v=j8D8YjgnGR4)

There are two main problems to solve when making a Sitcom Machine:
1. Detect a pass-by
2. Play music

1. Most implementations use some sort of IR-sensor, ultrasonic sensor or other means to create a fancy tripwire that makes the device play sound immediately when the user passes the trap. Other implementations (usually for making a door alarm or the like) requires some trickery with door locks and the like. Considering that our landlord won't be too happy with any permanent alterations, we will stick with a "trip"trap-solution

2. Usually, most detection is done by a microcontroller, and most microcontrollers aren't too happy about playing sounds. At our level (which isn't that high at all, FYI) we can make a buzzer buzz different tones (but it requires alot of coding, and manually for every tune we wish that the machine will play. We plan on adding alot) or we can buy a wave shield and use it to play sounds (an elegant, simple way to solve the problem, but lacks the extensive control we want with the variability of the tunes to be played). We will go for a arduino-to-raspberry approach, where the arduino detects and the raspberry acts by playing sounds. Utilizing the internal clock and many other functions of the raspberry, we can create alot of unique sound events, and it can easily be built upon.


## Plan
Our Sitcom machine will be divided into two functional units:
* Arduino Uno: Will detect a person who is either leaving or entering the room, and report every detection to the raspberry pi through its serial out port. Detection is realized in this case with a Ultrasonic Sensor (HC-SR04). 
* Raspberry Pi: When it receives a message from the Uno, it will - in some way or another - choose a tune that it will play through its AUX-port. Can also report back to the arduino if need be.

The relationship between the two is illustrated in figure 1:

![Figure 1: Drawn schematic front](https://github.com/N35N0M/SITCOM/blob/master/images/Figure1.jpg)

In our implementation, we wish to make it possible for the system to detect whether the person is entering or leaving home, in order to make the Raspberry Pi play different types of jingles depending on entering/exiting, day/night, first out/last inm etc.

As long as the ultrasonic sensor is mounted correctly, it should be no problem to detect whether the person is moving away or towards the door, as it can record several distance measurements over time. The arduino will use these measurements to decide where the person (or UFO (or UWO)) is headed.
![Figure 2: Drawn schematic side](https://github.com/N35N0M/SITCOM/blob/master/images/Figure2.jpg)

## The execution
A work in progress.

1-1 Build the arduinosetup and tune the sensor to accurately detect a person walking towards or from the door, sending all detections with its own code out by serial
1-2 Setup the raspberry pi with some sort of music setup, and make it possible for the raspberry to receive signals from the Uno
1-3 Connect the parts together
2-0 Test the setup, confirm that it will play some sound every time a detection takes place.
// First version is now complete
3-1 Make several subfolders for entering, exiting, and subfolders within that the system can choose from. Several times of day? Or should it vary by season? 
4-1 Remote control functionality with the arduino remote included in the standard kit?
5-1 API for setting a special tune on a special time/date (for example a doom song on exam-day)
6-1 Couple it to our own SMS-server so it notifies of specific events. For example when we expect no one to be home (during holidays) as a weak form for intruder detection?
