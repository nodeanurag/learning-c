//WAP that calculates the Simple Interest and Compound Interest. The Principal, Amount, Rate of Interest and Time are entered through the keyboard.
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simpleInterest, compoundInterest;

    // Accepting input from the user
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculating Compound Interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Displaying the results
    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}