/*
 * file: main.h
 * Header file
 *
 * authors:
 *  Jannick Bloemendal
 *  Niels Redegeld
 *  Thijs Vader
 *  Rutger Jansen
 *
 * Hogeschool Utrecht
 * Date: 29-04-2024
 *
 * Version: 1.1.0
 *
 * CHANGELOG:
 *
 *
 */

#ifndef MAIN_H
#define MAIN_H

#include <Arduino.h>

#include <Wire.h>
#include <LiquidCrystal_I2C.h> // LCD SCREEN
#include <Servo.h>
#include <VernierLib.h> //include Vernier functions

// button debounce lib
// UART serialplotter lib?

void armESC();
int readVernier();
void sweepMotor(Servo *pESC);

#endif