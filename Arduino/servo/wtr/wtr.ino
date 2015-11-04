#define Grove_Water_Sensor 8     //Attach Water sensor to Arduino Digital Pin 8
#define Grove_Piezo_Buzzer 12    //Attach Piezo Buzzer to Arduino Digital Pin 12
#define LED 13                   //Attach an LED to Digital Pin 13 (or use onboard LED)
void setup(){
 pinMode(Grove_Water_Sensor, INPUT);     //The Water Sensor is an Input
 pinMode(Grove_Piezo_Buzzer, OUTPUT);    //The Piezo Buzzer is an Output
        pinMode(LED, OUTPUT);                   //The LED is an Output
}

void loop(){
        /* The water sensor will switch LOW when water is detected.
           Get the Arduino to illuminate the LED and activate the buzzer
           when water is detected, and switch both off when no water is present */
 if(digitalRead(Grove_Water_Sensor) == LOW){
                digitalWrite(LED,HIGH);
  digitalWrite(Grove_Piezo_Buzzer, HIGH);
                delay(2);
                digitalWrite(Grove_Piezo_Buzzer, LOW);
                delay(40);
        }else{
                digitalWrite(Grove_Piezo_Buzzer, LOW);
                digitalWrite(LED,LOW);
        }
}
