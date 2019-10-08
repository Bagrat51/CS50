#include <cs50.h>
#include <stdio.h>


int main(int argc, string argv[])
{
    int key ;
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
        exit(0);
    }
    else if (argc == 2)
    {
        key = atoi(argv[1]);
    }

    string text = get_string("%s", "Insert text: ");

    for (int i = 0; i < text[i] ; i++)
    {
        if (text[i] <= 122 && text[i] > 96)
        {
            text[i] -= 96;
            text[i] += key;
            text[i] %= 26;
            text[i] += 96;
        }
        else if (text[i] > 64 && text[i] <= 90)
        {
            text[i] -= 64;
            text[i] += key;
            text[i] %= 26;
            text[i] += 64;

        }       
    }
    printf("ciphertext: %s\n", text);
    
}

