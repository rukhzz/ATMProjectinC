#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{
    int amount,accountBalance=5000,mini[10],WithDrawal,repeat,i=0,j,Number=1234,
    account_number,date,time,choice,number_of_transactions,Balance;
    
    int *pChoice = &choice;
    
    printf("Welcome to SBI ATM\n\n");

    start:

    printf("\n\nEnter PIN Number:\n\n");
    scanf("%d",&Number);
    
    if(Number==1234){
        printf("\n\nEnter your account number:\n\n ");
            scanf("%d", &account_number);
    }else{
        printf("\n\nPlease enter the valid PIN Number:\n\n");
            goto start;
    }

    for(;;)
    {
    printf("\n1 for Deposite\n\n\n2 for WithDrawal\n\n\n3 for Balance Enquiry\n\n");    
    scanf("%d", pChoice);

    switch(*pChoice){
        case 1:
            printf("Enter amount:");
                scanf("%d",&amount);
                    if(amount<=20000){
                            accountBalance=accountBalance+amount;
                            printf("\n\nyou successfully deposited\n\n");
                            mini[i]=accountBalance;
                            printf("%d\n",accountBalance);
                            i++;
        }else{
            printf("\n\nMaximum deposite is 20k\n\n");
        }
        break;
        
        case 2:
            printf("Enter amount:");
                scanf("%d",&amount);
                    if(amount<=20000){
                        if(amount<=accountBalance){
                            mini[i]=accountBalance-amount;
                            printf("\n\nDeducting Amount:%d\n\naccountBalance:%d\n\n",amount,mini[i]);
                                    }if (amount>=accountBalance)
                                        {
                                                printf("\n\nInsufficient Balance\n\n");
                                        }
        }
        break;
        
        case 3:
            if(amount<mini[i]){
               printf("%d\n",mini[i]); 
            }else{
            printf("\n\nCurrent Balance:\n %d\n",accountBalance);
            }
        break;
        }
    
        printf("\n\nDo you want to continue?\n\nif Yes ---> 1\n\nif No ---> 2\n");
        scanf("%d",&repeat);
                if(repeat==2){
                    printf("\n\nThanks for using SBI ATM");
                    break;
        }
        
        }
        
return 0;
}