#include <stdio.h>

int main() {
    float child, adult, subtotal, tax_rate, tax, total, change, amount;
    int num_child, num_adult, people;
    printf("What is the price of a child's meal? ");
    scanf("%f", &child);
    printf("\nWhat is the price of an adult's meal? ");
    scanf("%f", &adult);
    printf("\nHow many children are there? ");
    scanf("%d", &num_child);
    printf("How many adults are there? ");
    scanf("%d", &num_adult);

    subtotal = (child * num_child) + (adult * num_adult);
    printf("Subtotal: $%.2f\n", subtotal);

    printf("What is the sales tax rate? ");
    scanf("%f", &tax_rate);
    tax = tax_rate / 100 * subtotal;
    printf("Sales Tax: $%.2f\n", tax);
    total = tax + subtotal;
    printf("Total: $%.2f\n", total);

    printf("What is the payment amount? ");
    scanf("%f", &amount);
    change = amount - total;
    printf("Change: $%.2f", change);

    people = num_child + num_adult;
    printf("\nI hope the %d of you enjoy your meal. \nThank you.", people);

    return 0;
}