# Omron TM ROS
### Requirements
1. Ubuntu 18.04
2. ROS Melodic
3. Modbus enabled in TM Flow settings 
4. Set computer ethernet ipv4 address as 192.168.1.2 and subnet 255.255.255.0 in ubuntu settings
5. pymodbus python module. To install, run in terminal:
```
pip install  -U pymodbus
```
### Usage
```
roslaunch tm_utils tm_utils.launch ip:=<robot ip address>
```
```
rosrun tm_motion ......................
```
