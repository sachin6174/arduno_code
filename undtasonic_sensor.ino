// int triggerPin = 7;
// int echoPin = 8;
// int timeInMicro;

// double distancInCMm;

// void setup()
// {
//     // put your setup code here, to run once:
//     Serial.begin(9600);
//     pinMode(7, OUTPUT);
//     pinMode(8, INPUT);
// }

// void loop() {
//   digitalWrite(triggerPin,LOW);
//   delayMicroseconds(2);
//   digitalWrite(triggerPin,HIGH);
//   delayMicroseconds(10);
//   digitalWrite(triggerPin,LOW);

//   timeInMicro = pulseIn(echoPin, HIGH);
//   distancInCMm = timeInMicro/29/2;

//   Serial.println(distancInCMm);
//   delay(100);
// }
