#include <stdio.h>
#include "myBank.h"
int main()
{
    char c;
    int tmp, stop = 1;
    while (stop)
    {
        printf("\nPlease choose a transaction type:\n");
        printf(" O-Open Account\n");
        printf(" B-Balance Inquiry\n");
        printf(" D-Deposit\n");
        printf(" W-Withdrawal\n");
        printf(" C-Close Account\n");
        printf(" I-Interest\n");
        printf(" P-Print\n");
        printf(" E-Exit\n");
        while(scanf(" %c",&c)==' '){}
        switch (c)
        {
        case 'O':
            O();
            break;
        case 'B':
            printf("Please enter account number: ");
            scanf("%d", &tmp);
            B(tmp);
            break;
        case 'D':
            printf("Please enter account number: ");
            scanf("%d", &tmp);
            D(tmp);
            break;
        case 'W':
            printf("Please enter account number: ");
            scanf("%d", &tmp);
            W(tmp);
            break;
        case 'C':
            printf("Please enter account number: ");
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
            printf("Invalid transaction type\n");
            break;
        }
    }
    return 0;
}