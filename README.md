# Bluetooth Controlled Car Using Arduino
## Objective
The primary objective of the Bluetooth-controlled Arduino car project is to demonstrate the feasibility and practicality of using Arduino microcontrollers and Bluetooth modules to create a versatile and customizable remote-controlled vehicle. Specifically, the project aims to achieve the following objectives:
- Design and assemble a functional Arduino-based car chassis capable of supporting the necessary components.
- Integrate a Bluetooth module with the Arduino board to enable wireless communication with external devices.
- Implement motor control algorithms to enable precise and responsive movement of the car in various directions.
- Develop a user-friendly mobile application for controlling the car remotely via Bluetooth.
- Explore potential applications and extensions of the Bluetoothcontrolled Arduino car for education, entertainment, and research purposes.

<br/>
<p float="left">
  <img src="https://github.com/user-attachments/assets/f777c683-9313-4f4f-8f69-637876440918" height="300" />
  <img src="https://github.com/user-attachments/assets/3bf8449c-fc1d-4628-aa0f-19ccb5a845cd" height="300" />
</p>

## Components Required
- Arduino UNO Microcontroller
- Motor Driver (L298N)
- Bluetooth Module (HC-05)
- DC Motors
- Chassis
- Wheels and Motor Mounting
- Power Source (12V Lithium-ION Battery Pack)
- Jumper Wires
- LEDs

## Working
### Hardware Setup
- Assemble the chassis, mount the wheels, motors, and the motor driver.
- Connect the DC motors to the motor driver (e.g., L298N). Typically, two motors are used for controlling movement: one for forward/backward motion and another for left/right turning.
- Connect the motor driver to the Arduino board, ensuring proper wiring for motor control. Typically, the motor driver receives control signals from the Arduino's digital pins.
- Connect the Bluetooth module (e.g., HC-05 or HC-06) to the Arduino board. The TX pin of the Bluetooth module connects to the RX pin of the Arduino, and vice versa.
- Power up the Arduino board using a suitable power source, ensuring that it provides enough voltage and current to drive the motors.

### Software Setup
- Write Arduino code to define the motor control logic and handle Bluetooth communication.
- Define variables to store the commands received via Bluetooth (e.g., forward, backward, left, right).
- Initialize the serial communication for debugging and the Bluetooth module.
- Implement a function to read incoming Bluetooth data and store it in variables.
- Based on the received commands, control the motors connected to the motor driver. For example:
  - To move forward: both motors rotate in the same direction.
  - To move backward: both motors rotate in the opposite direction.
  - To turn left: one motor rotates forward while the other rotates backward.
  - To turn right: one motor rotates backward while the other rotatesforward.
- Upload the code to the Arduino board.

### Operation
- Power up the Arduino car and ensure that the Bluetooth module is properly paired with the controlling device (e.g., smartphone).
- Launch a Bluetooth terminal app on the controlling device or a custom-built mobile app designed for controlling the Arduino car.
- Establish a Bluetooth connection between the controlling device and the Arduino car.
- Use the interface provided by the app to send commands (e.g., forward, backward, left, right).
- The Arduino car receives the commands via Bluetooth and executes the corresponding motor control actions based on the programmed logic.
- As a result, the car moves in the desired direction according to the commands sent from the controlling device.
