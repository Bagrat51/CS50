#include <cs50.h>
#include <stdio.h>
#include <string.h>

int shift (char c);

int main(int argc, string argv[])
{
	//inserting key and text
    string key;
    string text = get_string("Insert text: ");

    // key = argv [1]
    if (argc == 2)
    {
        key = argv[1];
	}
    else
    {
        printf("Usage: ./vigenere keyword");
    }

    //fuction to each key character
    int shift (char c)
    {
		if (c <= 122 && c > 96)
	    {
	        c -= 96;
	        c %= 26;
	    }
	    else if (c >= 65 && c <= 90)
	    {
	        c -= 65;
	        c %= 26;
	    }
    }

    //main crypter
    for (int i = 0; i < text[i] ; i++)
    {
        if (text[i] <= 122 && text[i] > 96)
        {
            text[i] -= 96;
            // here key is repeating for every text[i] character
            text[i] += shift(key[i]);
            text[i] %= 26;
            text[i] += 96;
        }
        else if (text[i] >= 65 && text[i] <= 90)
        {
            text[i] -= 65;
            text[i] += shift(key[i]);
            text[i] %= 26;
            text[i] += 65;
        }       
    }
    //crypted text
    printf("%s\n", text);
    
}


