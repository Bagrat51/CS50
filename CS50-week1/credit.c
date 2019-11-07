#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    long num = get_long("Insert card number: ");
    int count = 0;
    char mainnum[50];
    sprintf(mainnum, "%lu", num);
    int parity = strlen(mainnum) % 2;
    for (int i = 0; i < strlen(mainnum); i++)
    {
        char c = mainnum[i];
        const char *d = &c;
        int digit = atoi(d);
        if (i % 2 == parity)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
        }
        count += digit;
    }
    if (count % 10 == 0)
    {
        char c = mainnum[0];
        const char *d = &c;
        int digit = atoi(d);   // take first 1 digits
        char c1 = mainnum[1];
        const char *d1 = &c1;
        int digit1 = atoi(d1);   // take first 2 digits
        switch (digit)
        {
            case 3:
                if(digit1 == 7){
                    printf("AMEX\n");
                }
                break;
            case 4:
                if(digit1 == 0 || digit1 == 1 || digit1 == 2){
                    printf("VISA\n");
                }
                break;
            case 2:
                if(digit1 == 2){
                    printf("MASTERCARD\n");
                }
                break;
            case 5:
                if(digit1 == 5 || digit1 == 1){
                    printf("MASTERCARD\n");
                }
                break;
            default:
                printf("Valid!!\n");
                break;
        }
    }
    else if(count % 10 != 0);
    {
        printf("INVALID\n");
    }
}




