#include <stdio.h>

int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);

    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        printf("vowel");
    }else{
        printf("consonant");
    }

    return 0;
}
