#define ledPin 9
#define increment 2
#define decrement 3
int brightness;
int increment_state;
int decrement_state;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(increment, INPUT);
    pinMode(decrement, INPUT);
}

void loop()
{
    brightness = constrain(brightness,0,255);
    increment_state = digitalRead(increment);
    decrement_state = digitalRead(decrement);
    if(increment_state == HIGH){
        brightness=brightness + 5;
        delay(50);
    }
    else if(decrement_state == HIGH){
        brightness = brightness - 5;
        delay(50);
    }
    analogWrite(ledPin, brightness);
}