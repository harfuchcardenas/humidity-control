Introduction:

This repository is for measuring the humidity and temperature using DHT11 sensor connected to a nrf7002-DK board from Nordic semiconductors. It has been devloped on Zephyr OS which is an RTOS to create a subroutine to measure these factors on equally time spaced intervals. The used GPIO is to be determined as well as the output control of the fan.

After getting the fan controled, the next step will be to control it based on the humidity in order to control it.

Installation (Ubuntu 20.04.1 LTS) and build Zephyr:

--Clone the repository--

`git clone git@github.com:harfuchcardenas/humidity-control.git`

--Access directory--

`cd humidity-control`

--Give execution permission--

`chmod +x ./build-file`

--Run script--

`./build-file`

KiCAD hardware development can be found at the PCB Entwurf directory where the gerber and KiCAD files have been added.

Notes: If it is the first time the script is been run, then an Error will prompt out as there the Virtual Environment is created and the directories created are not updated in runtime, so re-run ./build-file.
If the script is run consecutively for different source directory it is needed to remove manually the build/ directory before the script is run again.

--TO-DO--
-Add automatic cache storage 
-Add strategy to remove build directory
