// constants won't change. They're used here to set pin numbers:
const int BUTTON_PIN = 4;       // the number of the pushbutton pin
const int PinLED = 2;
// Variables will change:
int lastState = LOW;  // the previous state from the input pin
int currentState;                // the current reading from the input pin

void setup() {
  // initialize serial communication at 9600 bits per second:
    pinMode(2, OUTPUT);
      Serial.begin(9600);
        // initialize the pushbutton pin as an pull-up input
          // the pull-up input pin will be HIGH when the switch is open and LOW when the switch is closed.
            pinMode(BUTTON_PIN, INPUT_PULLUP);
     }

void loop() {
  // read the state of the switch/button:
     currentState = digitalRead(BUTTON_PIN);

     if(lastState == HIGH && currentState == LOW){
        Serial.println("The button is pressed");
        digitalWrite(PinLED, HIGH);
     }else if(lastState == LOW && currentState == HIGH){
        Serial.println("The button is released");
        digitalWrite(PinLED, LOW);
     }
 // save the the last state
                                            lastState = currentState;
                                                    
                                                    }
                                                    
