# Water Garbage Collector

A low-cost floating water-cleaning robot designed to collect floating waste from ponds, lakes, and small water bodies using a conveyor-based collection mechanism and Bluetooth-controlled navigation.

---

## Overview

Water pollution caused by floating waste such as plastic covers, bottles, paper, and thermocol has become a major environmental concern. Manual cleaning methods are slow, unsafe, and labour-intensive.

This project presents a practical and cost-effective Water Garbage Collector prototype that helps reduce human effort in surface waste collection. The system operates using DC motors, L298N motor drivers, Arduino UNO, and an HC-05 Bluetooth module for wireless manual control.

The robot moves on water using propulsion motors while a conveyor mechanism lifts floating debris into a storage bin.

---

## Features

- Floating waste collection system
- Conveyor-based debris lifting mechanism
- Bluetooth-controlled navigation
- Arduino UNO based control system
- Waterproof floating platform
- Low-cost and practical prototype
- Stable motor-driver based movement system

---

## Components Used

- Arduino UNO R3
- HC-05 Bluetooth Module
- L298N Motor Driver Modules
- DC Motors
- Conveyor Belt Mechanism
- Floating Waterproof Base
- 12V Battery Pack
- 9V Battery
- Storage Bin

---

## Working Principle

1. The robot is connected to a mobile device through the HC-05 Bluetooth module.
2. User commands are sent wirelessly to the Arduino UNO.
3. The Arduino processes movement commands and controls the motors using L298N motor drivers.
4. Propulsion motors move the robot forward, backward, left, or right.
5. The conveyor mechanism rotates and lifts floating waste into the collection bin.
6. Waste is stored inside the onboard storage compartment.

---

## System Architecture

The system is built around the Arduino UNO R3, which acts as the main controller.

### Main Functional Units
- Bluetooth communication module
- Motor driver modules
- Propulsion system
- Conveyor collection system
- Power supply system

### Power Distribution
- 9V supply for Arduino UNO
- 12V supply for motor drivers and DC motors

---

## Mechanical Design

The prototype uses a floating waterproof plastic base for stability and buoyancy.

### Design Highlights
- Lightweight floating structure
- Conveyor positioned at an optimized angle
- Separate propulsion and conveyor motors
- Compact onboard electronics arrangement

The conveyor mechanism was designed to lift lightweight floating debris efficiently into the collection bin.

---

## Results and Analysis

The prototype successfully demonstrated:

- Smooth directional movement
- Reliable Bluetooth communication
- Stable conveyor operation
- Effective lifting of lightweight floating debris
- Stable electrical and mechanical performance during dry testing

### Key Observations
- Accurate motor response to Bluetooth commands
- Consistent conveyor rotation
- Stable motor-driver performance
- Secure structural support for components

### Current Limitations
- Prototype not tested in actual water conditions
- Manual operation only
- Limited heavy-load waste handling capability

---

## Project Structure

```text
Water-Garbage-Collector/
│
├── code/
│   └── Water_Garbage_Collector.ino
│
├── images/
│   ├── collector_front_view.png
│   ├── collector_top_view.png
│   ├── collector_side_view.png
│   └── conveyor_mechanism.png
│
├── presentation/
│   ├── Water_Garbage_Collector_PPT.pdf
│   └── Water_Garbage_Collector_Presentation.pptx
│
├── report/
│   └── Water_Garbage_Collector_Report.pdf
│
└── README.md
```

---

## Applications

- Surface waste collection
- Pond and lake cleaning
- Small-scale water body maintenance
- Environmental monitoring projects
- Embedded systems and robotics learning

---

## Future Improvements

- Autonomous obstacle detection
- Ultrasonic and IR sensor integration
- Solar-powered operation
- IoT-based monitoring
- Automatic waste detection
- Improved waterproofing and buoyancy
- Higher-capacity conveyor mechanism

---

## Team Members

- Mani Sharan Raj Mengani
- Rishitha Vallika Pulaparthi
- Larshitha Borra

---

## Conclusion

The Water Garbage Collector successfully demonstrates the concept of a low-cost floating waste-collection robot using embedded systems and mechanical conveyor-based cleaning.

The project combines Arduino-based control, wireless communication, motor-driver systems, and practical mechanical design into a functional prototype aimed at reducing human effort in cleaning floating waste from water surfaces.
