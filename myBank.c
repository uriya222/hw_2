#include <stdio.h>
static float accounts[2][50] = {0};
void O()
{
    float income = -1;
    int available = -1;
    for (size_t i = 0; i < 50; i++)
    {
        if (accounts[1][i] == 0)
        {
            printf("Please enter amount for deposit: ");
            scanf(" %f", &income);
            if (income < 0)
            {
                printf("Failed to read the amount\n");
                return;
            }
            available = i + 901;
            accounts[0][i] = income;
            accounts[1][i] = 1;
            printf("New account number is: %d \n", available);
            break;
        }
    }
}
void B(int num)
{
    if (num < 900 || num > 951)
    {
        printf("Failed to read the account number\n");
        return;
    }
    int num2 = num - 901;
    if (accounts[1][num2] == 0)
    {
        printf("This account is closed\n");
        return;
    }
    printf("The balance of account number %d is: %0.2f\n", num, accounts[0][num2]);
}
void D(int num)
{
    float d;
    if (num < 900 || num > 951)
    {
        printf("Failed to read the account number\n");
        return;
    }
    int num2 = num - 901;
    if (accounts[1][num2] == 0)
    {
        printf("This account is closed\n");
        return;
    }
    printf("Please enter amount for deposit: ");
    scanf(" %f", &d);
    if (d >= 0)
    {
        accounts[0][num2] += d;
        printf("your new balance is:%0.2f\n", accounts[0][num2]);
    }
}
void W(int num)
{
    float w;
    if (num < 900 || num > 951)
    {
        printf("Failed to read the account number\n");
        return;
    }
    int num2 = num - 901;
    if (accounts[1][num2] == 0)
    {
        printf("This account is closed\n");
        return;
    }
    printf("Please enter the amount to withdraw: ");
    scanf(" %f", &w);
    if (w >= 0)
    {
        if (accounts[0][num2] < w)
        {
            printf("Cannot withdraw more than the balance\n");
            return;
        }
        accounts[0][num2] -= w;
        printf("The new balance is: %0.2f\n", accounts[0][num2]);
    }
}
void C(int num)
{
    if (num < 900 || num > 951)
    {
        printf("Failed to read the account number\n");
        return;
    }
    int num2 = num - 901;
    if ((accounts[1][num2] == 0))
    {
        printf("This account is closed\n");
        return;
    }
    if (accounts[1][num2] == 1)
    {
        accounts[1][num2] = 0;
        accounts[0][num2] = 0;
    }
}
void P()
{
    for (size_t i = 0; i < 50; i++)
    {
        if (accounts[1][i] == 1)
        {
            printf("The balance of account number %lu is: %0.2f\n", i + 901, accounts[0][i]);
        }
    }
}
void I()
{
    float p, cal;
    printf("Please enter interest rate: ");
    scanf(" %f", &p);
    if (p > -99 && p < 99)
    {
        for (size_t i = 0; i < 50; i++)
        {
            if (accounts[1][i] == 1)
            {
                cal = (p * accounts[0][i]) / 100;
                accounts[0][i] += cal;
            }
        }
    }
    else
    {
        printf("Failed to read the interest rate\n");
    }
}
void E()
{
    for (size_t i = 0; i < 50; i++)
    {
        if (accounts[1][i] == 1)
        {
            accounts[1][i] = 0;
            accounts[0][i] = 0;
        }
    }
}