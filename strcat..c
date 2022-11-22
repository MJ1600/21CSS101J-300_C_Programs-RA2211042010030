#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100] = "Hi\t", str2[] = "Mother";
    
    strcat(str1,str2);
    
    puts(str1);
    puts(str2);
    
    return 0;
}
