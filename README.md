# Gesture-Controlled Robot using Hand Tracking

---
##### This repository contains code for a gesture-controlled robot that can be operated using hand gestures captured through a webcam. The robot is controlled based on the number of fingers extended by the user's hand.

---
## Requirements
#### To run the code, you will need the following:
1. Arduino Board
2. 5 Servo Motors
3. Python with OpenCV and PySerial libraries
4. Webcam

---
## How it Works
#### The system works by detecting and tracking hand gestures using a webcam and the OpenCV library in Python. The Python script captures frames from the webcam and processes them to identify the number of fingers extended by the user. Based on the finger count, the corresponding servo angles for the thumb, index finger, middle finger, ring finger, and little finger are calculated.

#### The calculated angles are then sent to the Arduino board via the serial port. The Arduino code receives the angles and moves the servo motors accordingly.

---
## Setup
#### 1. Connect the servo motors to the Arduino board as follows:

Thumb Servo: Pin 9
Index Finger Servo: Pin 10
Middle Finger Servo: Pin 11
Ring Finger Servo: Pin 12
Little Finger Servo: Pin 13
Upload the Arduino code provided in the repository to your Arduino board.

Install the required Python libraries by running:

Copy code
pip install opencv-python
pip install pyserial
Clone this repository and navigate to the directory.

Run the Python script:

Copy code
python gesture_control.py
Point your webcam towards your hand and use the following gestures to control the robot:

Thumb Up: Move the thumb servo to 180 degrees.
Thumb Down: Move the thumb servo to 90 degrees.
Index Finger Up: Move the index finger servo to 180 degrees.
Index Finger Down: Move the index finger servo to 90 degrees.
Middle Finger Up: Move the middle finger servo to 180 degrees.
Middle Finger Down: Move the middle finger servo to 90 degrees.
Ring Finger Up: Move the ring finger servo to 180 degrees.
Ring Finger Down: Move the ring finger servo to 90 degrees.
Little Finger Up: Move the little finger servo to 180 degrees.
Little Finger Down: Move the little finger servo to 90 degrees.
Notes
Make sure the webcam is correctly connected and functional.
Ensure that the lighting conditions are suitable for proper hand detection.
Adjust the angles in the Arduino code to match the range of motion of your specific servo motors.
Feel free to modify and improve the code as per your needs.

Happy Gesture Controlling!




User
I named the repository hand gesture control servo robot
ChatGPT
Great choice! "Hand Gesture Control Servo Robot" is a descriptive and clear name that reflects the purpose and functionality of the project. It conveys the idea that the repository contains code for a robot controlled by hand gestures using servo motors. This name should help users easily understand what the project is about when they come across the repository. Best of luck with your project and repository! If you have any more questions or need further assistance, feel free to ask. Happy coding!
