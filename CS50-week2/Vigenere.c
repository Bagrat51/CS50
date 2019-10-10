#include <cs50.h>
#include <stdio.h>
#include <string.h>

int shift(char c)
{
    if (c <= 122 && c >= 97)
    {
        c -= 97;
    }
    else if (c >= 64 && c <= 90)
    {
        c -= 65;
    }
    return c;
}

int main(int argc, string argv[])
{

    string key;
    // key = argv [1]
    if (argc != 2)
    {
        printf("Usage: ./caesar keyword\n");
        return 1;
        exit(0);
    }
    else if (argc == 2)
    {
        key = argv[1];
    }
    string text = get_string("Insert text: "); // how exclude numbers from string ??
    //main crypter
    for (int i = 0; i < text[i] ; i++)
    {
        int j = i % strlen(key); //      dont repeat on smbols?? 
        if (text[i] <= 122 && text[i] > 96)
        {
            text[i] -= 96;
            // here key is repeating for every text[i] character               
            text[i] += shift(key[j]);
            text[i] %= 26;
            text[i] += 96;
        }
        else if (text[i] >= 64 && text[i] <= 90)
        {
            text[i] -= 64; //check
            text[i] += shift(key[j]);
            text[i] %= 26;
            text[i] += 64;
        }       
    }
    printf("ciphertext: %s\n", text);
    
}



