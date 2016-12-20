/*Jospeh Joslin, Nick Lonsdale,Kuljot Dhami*/

#include "simpletools.h" // Include simpletools library
#include "servo.h" // Include servo heade

int Sensordetect;
int main() // Main function
{
Sensordetect = 000;
while(1) // Main loop
{
int state3 = input(5); // Check sensor (1) motion, (0) no motion
int state2 = input(6);
int state1 = input(7);
if(state1 == 0 && state2 == 0 && state3 == 0)
{
//Sensordetect = 000;
print(" 0 0 0\n");
pause(300);
}
else if(state1 == 0 && state2 == 0 && state3 == 1)
{
Sensordetect = 001;
print(" 0 0 1\n");
pause(300);
}
else if(state1 == 0 && state2 == 1 && state3 == 0)
{
Sensordetect = 010;
print(" 0 1 0\n");
pause(300);
}
else if(state1 == 0 && state2 == 1 && state3 == 1)
{
Sensordetect = 011;
print(" 0 1 1\n");
pause(1000);
}
else if(state1 == 1 && state2 == 0 && state3 == 0)
{
Sensordetect = 100;
print(" 1 0 0\n");
pause(300);
}
else if(state1 == 1 && state2 == 0 && state3 == 1)
{
Sensordetect = 101;
print(" 1 0 1\n");
pause(300);
}
else if(state1 == 1 && state2 == 1 && state3 == 0)
{
Sensordetect = 110;
print(" 1 1 0\n");
pause(300);
}
else if(state1 == 1 && state2 == 1 && state3 == 1)
{
Sensordetect = 111;
print(" 1 1 1\n");
pause(300);
}
switch(Sensordetect)
{
case 001:
servo_angle(17,1800);
break;
case 010:
servo_angle(17, 900);
break;
case 100:
servo_angle(17, 0);
break;
case 110:
servo_angle(17,450);
break;
case 011:
servo_angle(17, 1450);
break;
case 000:
servo_angle(17, 900);
break;
case 101:
for (int i=1; i<=1800; i=i+50)
{
servo_angle(17,i);
pause(100);
}
for(int j=1800; j>=0; j=j-50)
{
servo_angle(17,j);
pause(100);
}
break;
case 111:
/*servo_angle(17, 0);
pause(500);
servo_angle(17, 450);
pause(500);
servo_angle(17, 900);
pause(500);
servo_angle(17, 1450);
pause(500);
servo_angle(17, 1800);
pause(500);
servo_angle(17, 1450);
pause(500);
servo_angle(17, 900);
pause(500);
servo_angle(17,450);
pause(500);
servo_angle(17, 0);
pause(500);
*/
for (int i=1; i<=1800; i=i+5)
{
servo_angle(17,i);
pause(1);
}
for(int j=1800; j>=0; j=j-5)
{
servo_angle(17,j);
pause(1);
}
break;
default:
break;
}