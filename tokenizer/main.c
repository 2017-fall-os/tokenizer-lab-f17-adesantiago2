#include <stdio.h>

int main()
{
    mytoc("Hello my dog's name is Darwin.",' ');
    printf("\n");
    mytoc("     Hello   World!    ",' ');
    printf("\n");
    mytoc("",' ');
    printf("\n");
    mytoc("          ",' ');
    printf("\n");
    mytoc(" HelloWorld",' ');
    printf("\n");

    char IOstring;
    printf("Enter string to tokenize: \n$");
    scanf("%[^\n]s",&IOstring);
    mytoc(&IOstring,' ');

}

