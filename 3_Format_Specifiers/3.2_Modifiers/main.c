#include <stdio.h>

int main(){

    //format specifiers with modifiers 

    /*
    //width - specifies the minimum no of chars to print 

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    //can add 0 before 4d to put 0s in place of spaces
    // add + before d to show to +ve and -ve nos with their signs 
    printf("%+d\n", num1); //for 1 , left side with appended with spaces
    printf("%+d\n", num2); // add - before 4d to justify the numbers spacing, will have all the space after the numbers  
    printf("%-d\n", num3);
    
    ///////////////////////////////////////////////////////////////////

    //precision 

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    //default - 6 precision 
    printf("%.1f\n", price1); //19.99 will be rounded to 20.0
    printf("%.1f\n", price2);
    printf("%.2f\n", price3);

    //////////////////////////////////////////////////////////////////
    */

    //width precision flags

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;
 
    printf("%+7.2f\n", price1); //adding 7 will give width of 7
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);

    return 0;

}