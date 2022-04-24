#include<stdio.h>

//José cresce 2cm por ano e Pedro cresce 3cm.
int main () {

float pedro = 110 , jose = 150;
int i = 0;

do
{
 jose = jose + 2;
 pedro = pedro + 3;
 i++;
} while (jose > pedro);


printf("Pedro será mais que paulo em %d anos\n", i);
return 0;
} 