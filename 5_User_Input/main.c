#include <stdio.h>
#include <string.h> //header file for strings

int main(){

    int age = 0;
    float gpa = 0.0f; //for double f is not required
    char grade = '\0'; // \0 = null terminator char
    //if string is unassigned then have to declare array size
    char name[30] = ""; //here 30 chars or 30 bytes

    printf("Enter your age: ");
    scanf("%d", &age); // & is address-of operator, so at the address of var a we're going a store a value 
    
    printf("Enter your gpa: ");
    scanf("%f", &gpa); // after entering gpa var, there is 3.2\n

    //our C program picked up this \n char and assigned it grade var 
    printf("Enter your grade: ");
    scanf(" %c", &grade); //but we dont get time to enter this because of new line buffer 3.2\n
    //just add a space after " %c" to tell to skip the \n char

    getchar(); // to clear the \n char within the input buffer when using fgets
    printf("Enter your full name: "); //will only print our first name 
    //scanf("%s", &name); //scanf cannot read any whitespaces as it stops reading after encountering any whitespaces
    // So use fgets - file get string 
    fgets(name, sizeof(name), stdin); //3 parameters, use sizeof() instead of manually typing string size everytime
    name[strlen(name) - 1] = '\0'; //assigning null terminator to last char 
    // So now it will be "Lahar Baruah\0" instead

    // C allows some previosuly assigned values to unassigned vars
    // So, we will get undefined behavior 
    printf("%s\n", name); //if we move this printf statement to the top then it prints a new line after printing out name 
    // because fgets func reads a whole line of input so when we enter our name and hit enter, it includes that enter key as well
    // so it would be like "Lahar Baruah\n"
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    
    return 0;
}