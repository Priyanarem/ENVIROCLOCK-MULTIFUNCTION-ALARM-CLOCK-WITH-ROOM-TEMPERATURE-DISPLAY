# EnviroClock – Multifunction Alarm Clock with Temperature Display

## Overview
EnviroClock is an embedded system project built using the LPC2148 ARM7 microcontroller.  
The system displays the current time, alarm settings, and room temperature on an LCD.  
Users can configure time and alarm through a keypad interface.

## Features
- Real Time Clock (RTC) display
- Alarm functionality with buzzer alert
- Room temperature monitoring using LM35
- LCD display interface
- Keypad based configuration
- Interrupt based menu system

## Hardware Components
- LPC2148 ARM7 Microcontroller
- 16x2 LCD Display
- 4x4 Keypad
- LM35 Temperature Sensor
- Buzzer
- Push Buttons
- LEDs

## Software Requirements
- Embedded C
- Keil uVision
- Flash Magic

## System Architecture
Modules included in the system:

- RTC Module
- LCD Driver
- Keypad Interface
- ADC Temperature Sensor Interface
- Alarm Management
- Buzzer Control

## Workflow
1. Initialize peripherals (LCD, RTC, ADC, keypad).
2. Read real-time clock data.
3. Read room temperature from LM35 sensor.
4. Display information on LCD.
5. Compare current time with alarm time.
6. Activate buzzer when alarm triggers.

## Applications
- Smart alarm clocks
- Environmental monitoring
- Embedded systems learning project

## Author
N GOWRI PRIYA
