#include <LiquidCrystal_PCF8574.h>



 #define trigPin 9
 #define ecloPin 8
 #define led 10
#include <Wire.h> 
#include <LiquidCrystal.h>
LiquidCrystal_I2C lcd(0x27,0, 1, 2, 4, 5, 6, 7, 3);




void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(ecloPin, INPUT);
pinMode(led, OUTPUT);
lcd.init();                     
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello");
  lcd.setCursor(0,1);
  lcd.print("ArduinoMaster");
}
void loop() {
long d;
long t;
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
   t =  pulseIn(ecloPin, HIGH);
   d = (t/2)*0.034;
   if(d < 5){
digitalWrite(led, HIGH);
 delay(300);
digitalWrite(led, LOW);
 delay(1000);
 digitalWrite(led, HIGH);
  delay(300);
 digitalWrite(led, LOW);
 delay(900);
 digitalWrite(led, HIGH);
  delay(300);
 digitalWrite(led, LOW);
 delay(800);
 digitalWrite(led, HIGH);
  delay(300);
 digitalWrite(led, LOW);
 delay(700);
 digitalWrite(led, HIGH);
  delay(300);
 digitalWrite(led, LOW);
 delay(600);
 digitalWrite(led, HIGH);
  delay(300);
 digitalWrite(led, LOW);
 delay(500);
 digitalWrite(led, HIGH);
  delay(300);
 digitalWrite(led, LOW);
 delay(400);
 digitalWrite(led, HIGH);
  delay(300);
 digitalWrite(led, LOW);
 delay(300);
 digitalWrite(led, HIGH);
  delay(300);
 digitalWrite(led, LOW);
 delay(200);
 digitalWrite(led, HIGH);
  delay(300);
 digitalWrite(led, LOW);
 delay(100);
  digitalWrite(led, HIGH);
   delay(300);
  digitalWrite(led, LOW);
  delay(75);
  digitalWrite(led, HIGH);
   delay(300);
  digitalWrite(led, LOW);
  delay(50);
  digitalWrite(led, HIGH);
   delay(300);
  digitalWrite(led, LOW);
  delay(25);
  digitalWrite(led, HIGH);
   delay(300);
  digitalWrite(led, LOW);
   delay(5);
  digitalWrite(led, HIGH);
    }
    else{
      digitalWrite(led, LOW);
    }
}
