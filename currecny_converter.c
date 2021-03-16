#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Constants for currencies
    const float BITCOIN_IN_RUPEE = 8732103;
    const float BITCOIN_IN_DOLLAR = 55921;
    const float DOLLAR = 156;
    const float DOLLAR_IN_BITCOIN = 0.000018;

    // Variables for amount, option
    int option;
    float amount;

    // Menu Output
    printf("\n --- Currency Converter ---\n\n");
    printf("1- Convert Dollar to Rupee\n");
    printf("2- Convert Bitcon to Dollar\n");
    printf("3- Convert Dollar to Bitcoin\n");
    printf("4- Convert Bitcoin to Ruppe\n\n");

    // Input user for amount.
    printf("Select: ");
    scanf("%d", &option);

    // Conditions to check amount
    if ( option == 1) {
        printf("Add Amount in Dollar: ");
        scanf("%f", &amount);
        amount = amount * 157;
        printf("Total Amount in Rupee : %f \n\n", amount);
    } else if ( option == 2 ) {
        printf("Add Amount in Bitcoin: ");
        scanf("%f", &amount);
        amount = amount * BITCOIN_IN_DOLLAR;
        printf("Total Amount in Dollar : %f \n\n", amount);
    } else if ( option == 3 ) {
        printf("Add Amount in Dollar: ");
        scanf("%f", &amount);
        amount = amount * DOLLAR_IN_BITCOIN;
        printf("Total Amount in Bitcoin : %f \n\n", amount);
    } else if ( option == 4 ) {
        printf("Add Amount in Bitcoin: ");
        scanf("%f", &amount);
        amount = amount * DOLLAR_IN_BITCOIN;
        printf("Total Amount in Ruppe : %f \n\n", amount);
    }


    return 0;
}
