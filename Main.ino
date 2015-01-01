#include <CapacitiveSensor.h>
#define speaker 11
//Send Pin & Receive Pin.
CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);      
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);        
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);        
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);      
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);       
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);        
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);        
long limit;

void setup()                    
{
  limit=800;
}

void loop()                    
{

  long total1 =  cs_2_3.capacitiveSensor(60);
  long total2 =  cs_2_4.capacitiveSensor(60);
  long total3 =  cs_2_5.capacitiveSensor(60);
  long total4 =  cs_2_6.capacitiveSensor(60);
  long total5 =  cs_2_7.capacitiveSensor(60);
  long total6 =  cs_2_8.capacitiveSensor(60);
  long total7 =  cs_2_9.capacitiveSensor(60);
  
 

  if (total1 > limit) tone(speaker,523);
  if (total2 > limit) tone(speaker,587);
  if (total3 > limit) tone(speaker,659); 
  if (total4 > limit) tone(speaker,698);
  if (total5 > limit) tone(speaker,784);
  if (total6 > limit) tone(speaker,880);
  if (total7 > limit) tone(speaker,988);
  

  if (total1<=limit  &  total2<=limit  &  total3<=limit & total4<=limit  &  total5<=limit  &  total6<=limit &  total7<=limit)
    noTone(speaker);

     delay(10);   // arbitrary delay to limit data to serial port 
}
