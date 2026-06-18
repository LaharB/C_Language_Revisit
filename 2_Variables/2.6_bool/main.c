#include <stdio.h>
#include <stdbool.h> //to work with bools

int main(){

    //vars
    //bool - booleans are either TRUE(1) or FALSE(0)

    bool isOnline = false; //can also assign 1/0
    bool isStudent = false;
    bool forSale = true;

    //we use bools inside programs such as if-statements
    //printf("%d", isOnline); 

    if(forSale){
        printf("That item is for sale");
    }
    else{
        printf("That item is NOT for sale");
    }

    return 0;
}
// variable = A reusable container for a value.
//            Behaves as if it were the value it contains.

// int = whole numbers (4 bytes in modern systems)
// float = single-precision decimal number (4 bytes)
// double = double-precision decimal number (8 bytes)
// char = single character (1 byte)
// char[] = array of characters (size varies)
// bool = true or false (1 byte, requires <stdbool.h>)