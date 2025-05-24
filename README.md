This repository is for measuring the humidity and temperature using DHT11 sensor connected to a nrf7002-DK board from Nordic semiconductors. It has been devloped on Zephyr OS which is an RTOS to create a subroutine to measure these factors on equally time spaced intervals. The used GPIO is to be determined as well as the output control of the fan.

After getting the fan controled the next step will be to control it based on the humidity in order to control it.

Installation (Ubuntu 20.04.1 LTS):

mkdir Humidity\ control
mkdir Humidity\ control
cd Humidity\ control

wget https://apt.kitware.com/kitware-archive.sh
sudo bash kitware-archive.sh


sudo apt install --no-install-recommends git cmake ninja-build gperf \
  ccache dfu-util device-tree-compiler wget \
  python3-dev python3-pip python3-setuptools python3-tk python3-wheel xz-utils file \
  make gcc gcc-multilib g++-multilib libsdl2-dev libmagic1
  
cmake --version
python3 --version
dtc --version

sudo apt install python3-venv
