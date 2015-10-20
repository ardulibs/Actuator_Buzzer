/*
 * ActuatorBuzzer
 * Version 0.1.0 Oct, 2015
 * Copyright 2015 Diego de los Reyes
 *
 * Controls the piezobuzzer.
 */

#ifndef ActuatorBuzzer_h
#define ActuatorBuzzer_h
#define LIBRARY_VERSION	 0.1

#include "Arduino.h"

 /** MUSICAL NOTES **/
#define SILENCE 0
#define DO_4	262
#define RE_4	294
#define MI_4	330
#define FA_4	349
#define SOL_4	392
#define LA_4	440
#define LA_SI_4 466
#define SI_4	494
#define DO_5	523
#define RE_5	587

/** MUSICAL FIGURES **/
#define SEMIQUAVER	111
#define QUAVER     	SEMIQUAVER*2
#define CROTCHET    QUAVER*2
#define MINIM      	CROTCHET*2
#define SEMIBREVE   MINIM*2

// Class ActuatorBuzzer
class ActuatorBuzzer {
 
	/** Public elements. **/
	public:
	
		/**
		 * Construct.
		 */
		ActuatorBuzzer();
	
		/**
		 * Attach the given pins.
		 * @param pin: pin where the buzzer servo is connected.
		 */
		void attach(int pin);

		/**
		 * Emits a sound.
		 */
		void speak(int sound, int time);

	private:

		/** Attributes **/

		//Pin where the buzzer is connected.
		int buzzer;
};

#endif