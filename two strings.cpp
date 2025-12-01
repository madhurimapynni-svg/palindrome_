#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    gets(str1);  // can also use fgets(str1, sizeof(str1), stdin)

    printf("Enter second string: ");
    gets(str2);

    result = strcmp(str1, str2);   // compare both strings

    if(result == 0)
        printf("Strings are EQUAL.\n");
    else
        printf("Strings are NOT equal.\n");

    return 0;
}

