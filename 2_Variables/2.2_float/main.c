#include <stdio.h>

int main(){
 
    //variables 

    //float has precision of 6-7 digits only 
    float gpa = 2.5; 
    float price = 19.99;
    float temperature = -10.1;

    printf("Ypur gpa is %f\n", gpa); //output will be 2.500000 - C has default behavior of showing 6 digits after decimal point for floating pt numbers 
    printf("The price is %.2f\n", price);
    printf("The temperature is %f°F\n", temperature); //add a degree symbol - alt + 0176 , need a numpad :(
 
    return 0;
}