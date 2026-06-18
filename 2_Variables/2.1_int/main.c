# include <stdio.h>

int main(){

    //variables - they are like data containers 

    int age = 25.5;  //integer , cannot store 25.5 the 0.5 will get truncated
    int year = 2025;
    int quantity = 2;

    printf("You are %d years of old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %0d x items", quantity);

    return 0;
}

