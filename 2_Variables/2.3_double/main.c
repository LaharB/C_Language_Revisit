#include <stdio.h>

int main(){

    //vars 
    //double - for high precision (upto 15-16 digits)

    double pi = 3.14159265358979;
    double e = 2.7182818284590;
    
    printf("The value of pi is %.15lf\n", pi);//lf - long floaing point number 
    //but default behav of C will show 6 digits afte decimal so use .15lf
    printf("The value of e is %.15lf", e);

    return 0;
}