#include <stdio.h>
#include <string.h>
int main()
{
    char a[10] = "Fun";
    char b[15] = "'F','U','N'";
    
    printf("Length of string a = %zu\n", strlen(a));
    printf("Length of string b = %zu\n", strlen(b));
    
    return 0;
}
