#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string mainnum = get_string("Insert card number: ");
    int count = 0;
    int parity = strlen(mainnum) % 2;
    //string mainnum;
    //sprintf(mainnum, "%lld", num);          how convert long to string
    //check mainnum
    //Convert Long to string ??
    for (int i = 0; i < strlen(mainnum); i++)
    {
        char c = mainnum[i];
        const char *d = &c;
        int digit = atoi(d);
        if (i % 2 == parity) // ??
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
        int digit = atoi(d);   // how take first 2 digits
        switch (digit)
        {
            case 3:
                printf("AMEX\n");
                break;
            case 4:
                printf("VISA\n");
                break;
            case 2:
                printf("MASTERCARD\n");
                break;
            case 5:
                printf("MASTERCARD\n");
                break;
            default:
                printf("Valid!!\n");
                break;
        }
    }
    else
    {
        printf("INVALID\n");
    }
}



