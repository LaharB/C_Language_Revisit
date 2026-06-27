#include <stdio.h>

int main(){

    // arithmetic operators = + - * / % ++ --

    int x = 10;
    int y = 2;
    int z = 0; 

    //z = x + y; 
    //z = x - y;
    //z = x * y;
    //z = x / y; //z is int so wont print decimal part, also even if we use float z still ans will be 0 as we dividing x by an int y 
    //z = x % 2; //remainder

    //x++; //increment operator
    //x--; //decrement operator

    // augmented assignment operators 
    //x = x + 2; 
    // OR
    //x+=2;
    //x+=3;

    //x = x - 3;
    //x-=3;

    //x = x * 2;
    //x*=2;

    //x = x / 2;
    //x/=2;

    printf("%d", x);

    return 0;
}