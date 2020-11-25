#include <stdio.h>
#include "myBank.h"
int main()
{
    char c;
    int tmp, stop = 1;
    printf("Wellcom to GNB! what whoud you like to do today?\n");
    while (stop)
    {
        printf("press:\n");
        printf("O - to open new account\n");
        printf("B - to find out your balance\n");
        printf("D - to deposit money in your account\n");
        printf("W - to withdraw money\n");
        printf("C - to close your acoount\n");
        printf("I - to adding interest rate to all open accounts\n");
        printf("P - to print all existed accounts and there value\n");
        printf("E - to close all accounts and exit\n");
        scanf(" %c",&c);
        switch (c)
        {
        case 'O':
            O();
            break;
        case 'B':
            printf("enter account number:\n");
            scanf("%d", &tmp);
            B(tmp);
            break;
        case 'D':
            printf("enter account number:\n");
            scanf("%d", &tmp);
            D(tmp);
            break;
        case 'W':
            printf("enter account number:\n");
            scanf("%d", &tmp);
            W(tmp);
            break;
        case 'C':
            printf("enter account number:\n");
            scanf("%d", &tmp);
            C(tmp);
            break;
        case 'I':
            I();
            break;
        case 'P':
            P();
            break;
        case 'E':
            E();
            stop = 0;
            break;
        default:
            printf("you entered wrong letter please try again\n");
            break;
        }
    }
    return 0;
}