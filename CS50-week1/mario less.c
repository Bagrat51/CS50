#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("%s", "height: ");
    }
    while (n <= 8 && n <= 1);
    
    for (int i = 0; i < n; i++ )
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        
        for(int j = -1; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
