# Morse Code Converter with Arduino

Convert plain text to Morse code and visualize it using an Arduino board and an LED.

 ![image](https://github.com/ingli0/MorseArduino/assets/76855285/1b392d8f-7e9c-401b-ac04-1d8424ed4a62)


## Table of Contents

- [Introduction](#introduction)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)


## Introduction

The Morse Code Converter project is a fun and educational Arduino-based project that allows you to input text and see its Morse code representation through an LED's blinking pattern. Morse code is a method used in telecommunication to encode text characters as sequences of two different signal durations, called dots and dashes.

This project serves as a simple introduction to both Arduino programming and Morse code, making it an ideal project for beginners who are looking to learn more about electronics and coding.

## Getting Started

### Prerequisites

- Arduino board (e.g., Arduino UNO)
- LED
- 220-ohm resistor
- Jumper wires
- Arduino IDE installed on your computer

### Installation

1. Clone the repository to your local machine:

   ```sh
   git clone https://github.com/ingli0/MorseArduino

2. Connect the LED to the Arduino:
   Connect the anode (longer leg) of the LED to digital pin 8 on the Arduino through the 220-ohm resistor.
   Connect the cathode (shorter leg) of the LED to the Arduino's ground (GND) pin.

3. Open the main.ino file in the Arduino IDE, upload it to your Arduino board, and make sure the board is connected to your computer

## Usage

1. Open the Serial Monitor in the Arduino IDE.
2. Type the text you want to convert to Morse code and press Enter.
3. Observe the LED connected to pin 8 blinking according to the Morse code patterns corresponding to the input text.

## Contributing

Contributions are welcome! If you encounter any issues, have suggestions for improvements, or want to add new features, feel free to submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

![image](https://github.com/ingli0/MorseArduino/assets/76855285/469c3c5c-6a45-435b-92b7-1620f367f028)

