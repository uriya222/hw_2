#include <stdio.h>
static float accounts[2][3] = {0};
void O()
{
    float income;
    int available = -1;
    for (size_t i = 0; i < 3; i++)
    {
        if (accounts[1][i] == 0)
        {
            printf("enter amount above zero:\n");
            scanf(" %f", &income);
            if (income < 0)
            {
                printf("you can't enter negative number!\n");
                return;
            }
            available = i + 901;
            accounts[0][i] = income;
            accounts[1][i] = 1;
            printf("congratulations! your new account number is:%d\n", available);
            break;
        }
    }
    if (available == -1)
        printf("sorry there's no available account\n");
}
void B(int num)
{
    if (num < 900 || num > 951)
    {
        printf("there's no such acoount\n");
        return;
    }
    int num2 = num - 901;
    if (accounts[1][num2] == 0)
    {
        printf("this acoount is not opened yet!\n");
        return;
    }
    printf("your balance is:%0.2f\n", accounts[0][num2]);
}
void D(int num)
{
    float d;
    if (num < 900 || num > 951)
    {
        printf("there's no such acoount!\n");
        return;
    }
    int num2 = num - 901;
    if (accounts[1][num2] == 0)
    {
        printf("this acoount is not opened yet!\n");
        return;
    }
    printf("enter amount to deposit:\n");
    scanf(" %f", &d);
    if (d < 0)
    {
        printf("you can't enter negative number!\n");
        return;
    }
    accounts[0][num2] += d;
    printf("your new balance is:%0.2f\n", accounts[0][num2]);
}
void W(int num)
{
    float w;
    if (num < 900 || num > 951)
    {
        printf("there's no such acoount!\n");
        return;
    }
    int num2 = num - 901;
    if (accounts[1][num2] == 0)
    {
        printf("this acoount is not opened yet!\n");
        return;
    }
    printf("enter amount you want to withdraw:\n");
    scanf(" %f", &w);
    if (w < 0)
    {
        printf("you can't enter negative number!\n");
        return;
    }
    if (accounts[0][num2] < w)
    {
        printf("there's not enough money in your acoount\n");
        return;
    }
    accounts[0][num2] -= w;
    printf("your new balance is:%0.2f\n", accounts[0][num2]);
}
void C(int num)
{
    if (num < 900 || num > 951)
    {
        printf("there's no such acoount!\n");
        return;
    }
    int num2 = num - 901;
    if (accounts[1][num2] == 0)
    {
        printf("this acoount is already close!\n");
        return;
    }
    if (accounts[1][num2] == 1)
    {
        accounts[1][num2] = 0;
        accounts[0][num2] = 0;
        printf("sucssesfuly closed!\n");
        return;
    }
}
void P()
{
    for (size_t i = 0; i < 50; i++)
    {
        if (accounts[1][i] == 1)
        {
            printf("account number:%lu with balance of:%0.2f\n", i + 901, accounts[0][i]);
        }
    }
}
void I()
{
    float p, cal;
    printf("enter the interest rate\n");
    scanf(" %f", &p);
    if (p < 0)
    {
        printf("you can't enter negative number!\n");
        return;
    }
    for (size_t i = 0; i < 50; i++)
    {
        if (accounts[1][i] == 1)
        {
            cal = (p * accounts[0][i]) / 100;
            accounts[0][i] += cal;
        }
    }
    printf("sucsessfuly done!\n");
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
    printf("bye bye\n");
}