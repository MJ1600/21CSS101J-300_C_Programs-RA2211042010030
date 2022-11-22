#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    
    printf("Enter your name: ");
    
    gets(name);
    //reads string from user
    
    printf("Your name is: ");
    
    puts(name);
    //display string
    
    return 0;
}
