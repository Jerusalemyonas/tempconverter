#include<stdio.h>
#include<ctype.h>
//using if else
int main(){

char unit;
float temp;

unit = toupper(unit);// for letter sensitvity in c
printf("\n Is the temprature in (F) or (C) ?: ");
scanf("%c", &unit);

if(unit=='C') {

printf(" Enter the temp in Celsuis: ");
scanf("%f",&temp);
temp=(temp*9/5)+32;
printf("\nThe temp in Farenheit is : %.1f",temp);
}

else if(unit=='F'){
printf("\nEnter the temp in Farenheit: ");
scanf("%f",&temp);
temp=((temp -32) *5)/9;
printf("\nThe temp in Celsius is : %.1f",temp);
}

else{
    printf("\n %c is not a valid unit of measurement");
}
    return 0;
}