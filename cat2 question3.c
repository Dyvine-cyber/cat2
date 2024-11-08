#include<stdio.h>

int main(){
float hours_worked, hourly_wage, gross_pay, tax, net_pay;
    
    // Get user input
	printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    // Calculate gross pay
    if (hours_worked > 40) {
        gross_pay = (40 * hourly_wage) + ((hours_worked - 40) * hourly_wage * 1.5);
    } else {
        gross_pay = hours_worked * hourly_wage;
    }

    // Calculate tax
    if (gross_pay <= 600) {
        tax = gross_pay * 0.15;
    } else {
        tax = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }

    // Calculate net pay
    net_pay = gross_pay - tax;

    // Print the results
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", tax);
   printf("Net Pay: $%.2f\n", net_pay);
return 0;
}