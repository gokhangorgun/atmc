#include <stdio.h>
#define PIN 1234

int main()
{
    int balance = 1000, operation,depositAmount,withdrawAmount;
    int pin,attempts;

    while (attempts < 3){
        printf("please enter yor PIN: ");
        scanf("%d",&pin);

        if(pin == PIN){
            printf("Login Succesful\n");
            break;
        } else{
            attempts++;
            printf("Incorrect PIN.Attempts left: %d\n",3 - attempts);
        }
    }
    if (attempts==3) {
        printf("Too many failed attempts.Your card has been blocked.You can get your card from our bank branch");
        return 0;
    }

    do {
        printf("\n--- ATM Menu ---\n");
        printf("(1) Check Balance\n");
        printf("(2) Show Options\n");
        printf("(3) Deposit\n");
        printf("(4) Withdraw\n");
        printf("(5) Exit\n");
        printf("Choose the operation you want to perform: ");
        scanf("%d", &operation);

        switch(operation){

            case 1:
            printf("Balance: %d \n",balance);
            break;
            case 2:
            printf("Balance: %d\n",balance);
            printf("processes");
            printf("deposit");
            printf("withdraw");
            printf("Exit");
            break;
            case 3:
            printf("the amount you want to deposit:");
            scanf("%d",&depositAmount);
            balance + depositAmount;
            printf("The deposit transaction is succesful\n");     
            break;    
            case 4:
            printf("The amount you want to withdraw");
            scanf("%d",&withdrawAmount);
            if (balance < withdrawAmount) 
            {
                printf("You don't have enough balance \n");
            } else {
                balance -= withdrawAmount;
                printf("Withdraw succesful.new balance: %d\n",balance);
            }
            break;
            case 5:
            printf("Exit...");
            break;
            default:
            printf("Error\n");
        }
        



    } while (operation !=5);








    return 0;
}