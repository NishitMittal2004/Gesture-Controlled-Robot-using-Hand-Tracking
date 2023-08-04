# Gesture-Controlled Robot using Hand Tracking

---
### This repository contains code for a gesture-controlled robot that can be operated using hand gestures captured through a webcam. The robot is controlled based on the number of fingers extended by the user's hand.

---
# Requirements
### To run the code, you will need the following:
### 1. Arduino Board
### 2. 5 Servo Motors
### 3. Python with OpenCV and PySerial libraries
### 4. Webcam

---
## How it Works
### The system works by detecting and tracking hand gestures using a webcam and the OpenCV library in Python. The Python script captures frames from the webcam and processes them to identify the number of fingers extended by the user. Based on the finger count, the corresponding servo angles for the thumb, index finger, middle finger, ring finger, and little finger are calculated.

### The calculated angles are then sent to the Arduino board via the serial port. The Arduino code receives the angles and moves the servo motors accordingly.

---





