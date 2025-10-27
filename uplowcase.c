#include <stdio.h>

int main() {

    char str[200];
    int i, upper = 0, lower = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0;str[i] != '\0'; i++)
    /* C stores word ending with \0. so hello is written as 'h' 'e' 'l' 'l' 'o' '\0'. 
    We have to remove \0, otherwise loop will continue reading garbage value. */
    {
        if (str[i]>= 'A' && str[i] <= 'Z')
        {
            upper++;
        }
        else if (str[i]>= 'a' && str[i] <= 'z')
        {
            lower++;
        }

    }
    
    printf("The number of uppercase letters are %d and lowercase letters are %d", upper, lower);
    return 0;

}