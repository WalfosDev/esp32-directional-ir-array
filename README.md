# Overivew
A DIY multi-zone IR proximity array for detecting objects within ~1m across left, center, and right zones. Includes schematics, firmware, and architectural decisions. Built for Concordia RoboWars on the ESP32-WROOM-32 Dev Board to detect opponents robots. It was designed around real-time performance because with rounds typically lasting under 2 seconds a sensor read blocking motor controlls is a critial failure point. It runs on an ESP32-S3 using ESP-IDF directly (no Arduino abstraction) with task scheduling handled by FreeRTOS for strict timing guarantees.

Schematics for the array in KiCad are listed below. The array uses 7 pins to controll a combined 16 IR Receivers and Emitters via multiplexers and decoders. The system allows for manual calibration of IR Receivers by icnporporating an operational amplifier that is used to increase the gain of input signal. 

Project is under active development.

# Architecture
@todo

# Usage & Calibration
@todo

# Development Progress
@todo
