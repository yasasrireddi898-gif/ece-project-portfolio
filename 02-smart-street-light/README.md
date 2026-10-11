# Automatic Smart Street Light System

## Overview
A beginner-friendly ECE project that automatically controls a street light based on the surrounding light intensity.

## Components
- ESP32 microcontroller
- Light sensor (LDR module)
- LED
- 220-ohm resistor

## Working Principle
The ESP32 reads the light sensor's analog value and compares it with a threshold.

- Dark environment: LED turns ON.
- Bright environment: LED turns OFF.

## Connections
- Sensor AO → ESP32 GPIO 34
- Sensor VCC → ESP32 3V3
- Sensor GND → ESP32 GND
- ESP32 GPIO 23 → 220-ohm resistor → LED anode
- LED cathode → ESP32 GND

## Simulation
[Open the project in Wokwi](https://wokwi.com/projects/477584857157700609)

## Learning Outcomes
- Reading analog sensor values
- Using conditional statements in C++
- Controlling an LED with ESP32
- Testing circuits in an online simulator

## Platform
Wokwi Simulator

*This project was tested in simulation. No physical hardware was used.*
