#include<stdio.h>
#include<ctype.h>


int main(){

char unit;
float temp; 

unit = toupper(unit);// for letter sensitvity in c
printf("\n Is the temprature in (F) or (C) ?: ");
scanf("%c", &unit);

switch(unit)
{
case 'C':
printf(" Enter the temp in Celsuis: ");
scanf("%f",&temp);
temp=(temp*9/5)+32;
printf("\nThe temp in Farenheit is :%.1f",temp);
break;

case 'F' :
printf("\nEnter the temp in Farenheit: ");
scanf("%f",&temp);
temp=((temp -32) *5)/9;
printf("\nThe temp in Celsius is : %.1f",temp);
break;
}

    return 0;
}