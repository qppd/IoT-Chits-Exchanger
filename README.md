<!DOCTYPE html>
<html>
<head>
  <title>IoT Chits Exchanger</title>
</head>
<body>
  <h1>IoT Chits Exchanger</h1>
  <p>This project is an IoT-based Chits Exchanger system designed to handle coin and bill inputs, dispense chits using a servo mechanism, and display information on an LCD screen. The system is built using an ESP32 microcontroller and various peripherals.</p>

  <h2>Features</h2>
  <ul>
    <li>Coin slot with interrupt-based pulse detection</li>
    <li>Bill acceptor with debounce logic</li>
    <li>Servo dispenser for chit dispensing</li>
    <li>20x4 I2C LCD for displaying messages</li>
    <li>Tactile buttons for user input</li>
  </ul>

  <h2>Progress</h2>
  <h3>Completed</h3>
  <ul>
    <li>Implemented coin slot functionality with debounce logic</li>
    <li>Integrated bill acceptor using TB74 pulse logic</li>
    <li>Added servo dispenser control using PCA9685</li>
    <li>Configured 20x4 I2C LCD for displaying messages</li>
    <li>Added tactile button handling with debounce logic</li>
  </ul>

  <h3>In Progress</h3>
  <ul>
    <li>Integration testing of all components</li>
    <li>Optimizing code for performance and reliability</li>
  </ul>

  <h3>Not Yet Done</h3>
  <ul>
    <li>Adding a web interface for remote monitoring</li>
    <li>Implementing a database for transaction logging</li>
    <li>Creating a detailed user manual</li>
  </ul>

  <h2>Setup Instructions</h2>
  <ol>
    <li>Clone this repository to your local machine.</li>
    <li>Install the required libraries in the Arduino IDE:
      <ul>
        <li>Adafruit PWM Servo Driver</li>
        <li>LiquidCrystal_I2C</li>
      </ul>
    </li>
    <li>Connect the hardware components as per the pin configuration in the code.</li>
    <li>Upload the code to the ESP32 using the Arduino IDE.</li>
    <li>Test each component individually before running the full system.</li>
  </ol>

  <h2>Contributing</h2>
  <p>Contributions are welcome! Please fork this repository and submit a pull request with your changes.</p>

  <h2>License</h2>
  <p>This project is licensed under the MIT License.</p>
</body>
</html>
