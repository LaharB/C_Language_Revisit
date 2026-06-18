#include <stdio.h>

int main(){

    //vars
    //string - In C, we dont have strings, "Lahar"
    //So we an array of characters for string
    // use "" 

    char name[] = "Bro Code";
    char food[] = "pizaa";
    char email[] = "fake123@gmail.com"; //123 will be treated as char rather than numeric values

    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);

    return 0;
}