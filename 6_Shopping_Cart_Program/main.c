#include <stdio.h>
#include <string.h>

int main(){

    // SHOPPING CART PROGRAM

    // Iniatialize vars to avoid undefined behavior incase we use these vars before they are assigned value by user
    char item[50] = "";
    float price = 0.0f; //for double f not reqd
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;
    
    printf("\nYou have bought %d %s/s\n", quantity, item);
    printf("The total is: %c%0.2f", currency, total); // while printing, can list multiple format specifiers in same line 

    return 0;
}