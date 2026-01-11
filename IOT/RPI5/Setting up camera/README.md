# Setting Up a USB Camera with a RPI5
In this Project we will connect a usb camera and live stream it using motion, we will acess the camera through a web browser by entering the ip address and the port in the url section.

## Syntax
```bash
http://(ip):(port)/
```
(Note:This syntax will work only after u type the following commands.)

## Components
- USB-Camera
- Raspberry Pi(3B+/4B+/5B+)
- Power Cable for the RPI

## Notes
In this project you will learn how to connect a USB-camera and live stream it through the terminal command line

## Know your RPI's Ip address
Before you know about your RPI's IP, make sure you have set-up your RPI.
Steps to be done to know your rpi's address(IF you know your RPI's IP address then u can skip this step)
- connect your hdmi port to your monitors port and power on your rpi
- after your rpi turns on your rpi os will appear
- connect your rpi to the wi-fi
- then go to turminal
- enter the following command "ifconfig"
- your ip will appear there, for example-192.168.0.1(The last 2 numbers may change)
- note down or rember that ip

## Choose your way to operate(SSH or Direct through HDMI)
If you are choosing to direct hdmi then u can continue the same way or else if u are choosing ssh you can control your rpi remotely through putty or any other alternatives od putty.I will be using mobaxterm for smooth flow experince as compared to putty.Now, to connect through ssh you must enter your ip address that you had noted down in the red circle as shown below in putty.
<img width="600" height="540" alt="Screenshot 2026-01-11 173801" src="https://github.com/user-attachments/assets/42120a9a-c322-4fe8-aba7-7d0ec36d4fd5" /><br>
Select connection type as ssh and click open.A new window opens up now enter your username and password that u had used during setting up of raspberry pi.

## Installation of Softwares
Before installation of softwares make sure that you have your usb camera cable connected any one of the usb inlets in the raspberrypi.
To make sure it is connected run the bellow command.

```bash
lsusb
```
the output most likely will look something like this.

```console
Bus 001 Device 005: ID 046d:0825 Logitech, Inc. Webcam C270
```

Since I am using a Logitech camera it will be showing as Logitech, Inc. Webcam C270
<br>
Then enter the below command to install the motion software.

```bash
sudo apt-get install motion
```

After the installation is complete enter the below command to make some changes so that your camera looks perfect.

```bash
sudo nano /etc/motion/motion.conf
```

Then you have to change some settings in the .conf file. It might be difficult sometimes to find the settings but use 'ctrl + w' to find it.
Make sure these things are correct as oer the given table
- daemon-On
- framerate-1000 to 1500
- streamport-8081
- Stream_Quality-100
- Stream_localhost-Off
- quality-100
- width-640
- height-480
- post_capture-5
<br>
Click ctrl+x and press y to save and enter to confirm and exit.

## Start the server
To start it first you need to restart the motion in order to do it type the below command.

```bash
sudo service motion restart
```
And now the final step is to enter the below command, this command starts the server.

```bash
sudo motion
```

## Viewing the camera
To view it enter the syntax mentioned above that u read
- ip-the number you noted
- port-8081
