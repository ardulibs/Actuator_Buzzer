/*
 * ActuatorBuzzer
 * Version 0.1.0 Oct, 2015
 * Copyright 2015 Diego de los Reyes
 *
 * Controls the piezobuzzer.
 */

#include "ActuatorBuzzer.h"

 /** CONSTRUCTORS **/

/**
 * Construct.
 */
ActuatorBuzzer::ActuatorBuzzer()
{
}

/** PUBLIC METHODS **/

/**
 * Attach the given pins.
 * @param pin: pin where the buzzer servo is connected.
 */
void ActuatorBuzzer::attach(int pin)
{
	buzzer = pin;
	pinMode(buzzer, OUTPUT);
}

/**
 * Emits a sound.
 */
void ActuatorBuzzer::speak(int sound, int time)
{
	tone(buzzer, sound, time);
	delay(time+10);
}