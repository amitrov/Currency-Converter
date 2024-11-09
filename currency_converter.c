#include <stdio.h>

#define EXCHANGE_RATE 0.85  // Exchange rate from dollars to euros
#define NUM_CONVERSIONS 10  // Number of conversions to perform

int main() {
    double dollars, euros;
    
    printf("Dollar to Euro Converter\n");
    printf("Using exchange rate of $1 = €%.2f\n", EXCHANGE_RATE);
    
    for (int i = 0; i < NUM_CONVERSIONS; i++) {
        printf("\nEnter amount in dollars (entry %d of %d): ", i + 1, NUM_CONVERSIONS);
        scanf("%lf", &dollars);

        // Convert dollars to euros
        euros = dollars * EXCHANGE_RATE;

        // Display the result
        printf("$%.2f is equivalent to €%.2f\n", dollars, euros);
    }

    printf("\nConversion complete for %d entries.\n", NUM_CONVERSIONS);
    return 0;
}
