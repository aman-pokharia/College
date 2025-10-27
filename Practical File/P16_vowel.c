#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);
    switch (tolower(ch))
    {
    case 'a':
        printf("Vowel");
        break;

    case 'e':
        printf("Vowel");
        break;

    case 'i':
        printf("Vowel");
        break;

    case 'o':
        printf("Vowel");
        break;

    case 'u':
        printf("Vowel");
        break;

    default:
        printf("Consonant");
        break;
    }
    return 0;
}