# IoT Chits Exchanger

This project is an IoT-based Chits Exchanger system designed to handle coin and bill inputs, dispense chits using a servo mechanism, and display information on an LCD screen. The system is built using an ESP32 microcontroller and various peripherals.

## Features
- Coin slot with interrupt-based pulse detection
- Bill acceptor with debounce logic
- Servo dispenser for chit dispensing
- 20x4 I2C LCD for displaying messages
- Tactile buttons for user input

## Progress
### Completed
- Implemented coin slot functionality with debounce logic
- Integrated bill acceptor using TB74 pulse logic
- Added servo dispenser control using PCA9685
- Configured 20x4 I2C LCD for displaying messages
- Added tactile button handling with debounce logic

### In Progress
- Integration testing of all components
- Optimizing code for performance and reliability

### Not Yet Done
- Implementing a database for transaction logging
- Creating a detailed user manual

## Setup Instructions
1. Clone this repository to your local machine.
2. Install the required libraries in the Arduino IDE:
   - Adafruit PWM Servo Driver
   - LiquidCrystal_I2C
3. Connect the hardware components as per the pin configuration in the code.
4. Upload the code to the ESP32 using the Arduino IDE.
5. Test each component individually before running the full system.

## Contributing
Contributions are welcome! Please fork this repository and submit a pull request with your changes.

## License
This project is licensed under the MIT License.
