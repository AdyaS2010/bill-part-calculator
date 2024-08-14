// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, float tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("$%.2f", half(bill_amount, tax_percent, tip_percent));
}

float half(float bill, float tax, float tip)
{
    tax = (tax / 100) * bill;
    tip = (tip / 100) * (bill + tax);
    return (bill + tax + tip) / 2;
}
