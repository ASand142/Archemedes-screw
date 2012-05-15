/*
 * This sketch is designed to control a motor by turning 
 * it on for a set amount of time on a schedule. it is 
 * essentialy a modified version of the TimeAlarmExample
 * that comes with the time library download, which is
 * required for this sketch to work. This was written 
 * for controlling a pet feeder and i plan to later use
 * it to make an automated watering system for a garden
 */

#include <Time.h>
#include <TimeAlarms.h>
const int motor1 =  2;  

void setup()
{
  Serial.begin(9600);
  setTime(6,59,55,1,1,12);  // set time a convenient time 
  // to startup the system this is for
  Alarm.alarmRepeat(7,00,00,MorningFeeding);// times are set close 
  Alarm.alarmRepeat(7,01,00,EveningFeeding);//to eachother for test purposes
  pinMode(motor1, OUTPUT);    
}
void  loop(){
  digitalClockDisplay();
  Alarm.delay(1000); // wait one second between clock display
} // NOTE: for some reason the code wouldn't
// compile without the loop so I used the loop from the
// example which is for displaying to a digital clock

// functions to be called when alarms trigger
void MorningFeeding(){
  digitalWrite(motor1, HIGH);    
  delay(5000); // to be adjusted based on how much you 
  //want to feed/water
  digitalWrite(motor1, LOW);  
}
void EveningFeeding(){
  digitalWrite(motor1, HIGH);    
  delay(5000);          
  digitalWrite(motor1, LOW);  
}

void digitalClockDisplay()
{
  // digital clock display of the time
  Serial.print(hour());
  printDigits(minute());
  printDigits(second());
  Serial.println(); 
}
void printDigits(int digits)
{
  Serial.print(":");
  if(digits < 10)
    Serial.print('0');
  Serial.print(digits);
}
