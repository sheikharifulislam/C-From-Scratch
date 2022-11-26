#include <stdio.h>

int main() {

   double loan_amount, total_amount, interest_rate, number_of_years,
       monthly_amount;

   printf("Enter The Loan Amount: ");
   scanf("%lf", &loan_amount);
   printf("Enter The Interest Rate: ");
   scanf("%lf", &interest_rate);
   printf("Enter The Numbr Of Year: ");
   scanf("%lf", &number_of_years);

   total_amount =
       loan_amount + loan_amount * (interest_rate * number_of_years) / 100;
   monthly_amount = total_amount / (number_of_years * 12);

   printf("Total Amount: %0.2lf\n", total_amount);
   printf("Monthly Amount: %0.2lf\n", monthly_amount);

   return 0;
}
