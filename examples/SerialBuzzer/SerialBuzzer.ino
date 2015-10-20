#include <ActuatorBuzzer.h>

int pin = A1;

ActuatorBuzzer buzzer;

void setup() {
  Serial.begin(9600);
  buzzer.attach(pin);
  
  Serial.println("1. Speak");
  Serial.println("Select option: ");
}

void loop() {
    int order = getOrder();
    executeOrder(order);    
}

int getOrder() {   
  int order = 0;
  //We received the order.
  if (Serial.available() > 0) {
    order = Serial.parseInt();
  }
  
  return order;
}

void executeOrder(int order) {
    //We execute the order.
    switch(order){
      case 0:
        //It has not received anything.
        break;
      case 1:
        Serial.println("Speak");
        buzzer.speak(DO_4, CROTCHET);
        buzzer.speak(RE_4, CROTCHET);
        buzzer.speak(MI_4, CROTCHET);
        buzzer.speak(FA_4, CROTCHET);
        buzzer.speak(SOL_4, CROTCHET);
        buzzer.speak(LA_4, CROTCHET);
        buzzer.speak(SI_4, CROTCHET);
        buzzer.speak(DO_5, CROTCHET);
        buzzer.speak(RE_5, CROTCHET);
        break;
      default:
        Serial.println("Unknown order");
     }
}