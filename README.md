# Arduino Servo Clicker

A small Arduino project that controls a servo motor to perform a random timed "click" action.

## Overview

This project moves a servo arm at random intervals between 5–15 seconds.
It was built as a simple automation experiment using an Arduino microcontroller.

## Features

* Random delay between movements
* Servo movement triggered automatically
* Configurable angles and timing
* V2 has a second click with a random delay following the first click

## Hardware

* Arduino board
* Servo motor
* Basic wiring

## Code Concepts

* Servo motor control
* Random timing using `random()`
* Microcontroller timing using `delay()`

## Possible Improvements

* Replace `delay()` with non-blocking timing (`millis()`)
* Add a button trigger
* Add adjustable timing using a potentiometer