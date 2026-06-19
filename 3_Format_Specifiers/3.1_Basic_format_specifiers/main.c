#include <stdio.h>

int main(){

    //format specifier - special tokens that begin with % followed
    //                 by a character that specifies the datatype and 
    //                 and optional modifiers(width, precision, flags).
    //                 They control how data is displayed or interpreted.

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Bro Code";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n",pi);//scanf("%lf") while taking inputs. 
    //but for output purposes, %f also does the job 
    printf("%c\n", currency);
    printf("%s\n", name);

    return 0;
}
