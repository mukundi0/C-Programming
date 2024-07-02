#include <stdio.h>
#include <stdlib.h>

struct CDAccount
{
    double balance;
    double interest_rate;
    int terms;
}CDAccount;

//funcion to display and compute
void get_data(struct CDAccount the_account){

    printf("Account terms (number of months): %d\n", the_account.terms);
    
    double interest = the_account.balance * (the_account.interest_rate / 100 ) * (the_account.terms / 12.0);

    double computed_balance = the_account.balance + interest;

    printf("The lnterest rate: %.2f\n", the_account.interest_rate);

    printf("The lnitial balance: %.2f\n", the_account.balance);

    printf("The balance after %d months: %.2f", the_account.terms, computed_balance);
}

void input_data(struct CDAccount){
    printf("Enter the balance: ");
    scanf("%lf",&CDAccount.balance);
    printf("Enter the interest rate: ");
    scanf("%lf",&CDAccount.interest_rate);
    printf("Enter the terms (number of months): ");
    scanf("%d",&CDAccount.terms);
}

int main(){
    
    //values entered
    /*printf("Enter the balance: ");
    scanf("%lf",&CDAccount.balance);
    printf("Enter the interest rate: ");
    scanf("%lf",&CDAccount.interest_rate);
    printf("Enter the terms (number of months): ");
    scanf("%d",&CDAccount.terms);*/
    
    //Alternative call a function to enter values
    input_data(CDAccount);

    //call the function
    get_data(CDAccount);

    return 0;

}
