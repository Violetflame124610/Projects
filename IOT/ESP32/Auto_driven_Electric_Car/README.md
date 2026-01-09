# 🚗 Auto Driven Car Using ESP32

This project demonstrates the design and implementation of an **auto driven (autonomous) car** using the **ESP32 microcontroller** and multiple sensors. The car is capable of detecting obstacles, sensing orientation, and controlling motor movement automatically without human intervention.

## 📌 Project Overview

The auto driven car uses sensor data to make movement decisions in real time. Ultrasonic and IR sensors help detect obstacles, while the MPU6050 provides motion and orientation data. Motor control is handled using an L298N Dual H-Bridge Motor Driver, allowing precise movement of the vehicle.

## 🧰 Components Used

- Car chassis  
- ESP32 microcontroller  
- MPU6050 (Gyroscope & Accelerometer)  
- IR sensor  
- Ultrasonic sensor  
- 2 × DC motors  
- 2 × Motor wheels  
- Breadboard  
- L298N Dual H-Bridge Motor Controller  
- Micro USB cable (for ESP32 programming)  
- Jumper wires  
- Solid core wires  

## ⚙️ Working Principle

1. The **ESP32** acts as the main control unit.
2. The **ultrasonic sensor** detects obstacles in front of the car.
3. The **IR sensor** assists in object or surface detection.
4. The **MPU6050** provides orientation and motion data.
5. Based on sensor inputs, the ESP32 sends control signals to the **L298N motor driver**.
6. The motor driver controls the direction and speed of the motors.
7. The car automatically moves, stops, or changes direction as needed.

## 🛠️ Software & Programming

- Microcontroller: **ESP32**
- Programming Language: **Arduino / C++**
- IDE: **Arduino IDE**
- Communication: Serial (via Micro USB cable)

## 🚀 Features

- Autonomous obstacle detection
- Automatic movement control
- Real-time sensor feedback
- Stable motor control using H-Bridge driver
- Compact and efficient design

## ▶️ How to Run the Project

1. Connect all components according to the circuit design.
2. Install the **ESP32 board package** in Arduino IDE.
3. Upload the code to ESP32 using a micro USB cable.
4. Power the circuit.
5. Place the car on a flat surface and observe autonomous movement.

## 🎯 Applications

- Robotics learning projects
- Autonomous vehicle basics
- Sensor integration practice
- Embedded systems development

## 📌 Notes

- Ensure proper power supply to motors
- Secure wiring to avoid loose connections
- Calibrate sensors for accurate detection

## 📜 License

This project is intended for educational and personal use.

## 👤 Author

User-Violetflame124610 Name-Dhruvagouda

Last Modified, Time-9:51PM Date-09/01/2026
