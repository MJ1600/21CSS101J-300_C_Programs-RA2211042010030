#include <stdio.h>

int main()
{
    int p1, p2, p3, p4, c = 0;
    
    printf("Number of problems solved in week 1:");
    scanf("%d", &p1);
    
    printf("Number of problems solved in week 2:");
    scanf("%d", &p2);
    
    printf("Number of problems solved in week 3:");
    scanf("%d", &p3);
    
    printf("Number of problems solved in week 4:");
    scanf("%d", &p4);
    
    if(p1 >= 10)
    {
        c = c + 1;
    }
    if(p2 >= 10)
    {
        c = c + 1;
    }
    if(p3 >= 10)
    { 
        c = c + 1;
    }
    if(p4 >= 10)
    {
        c = c + 1;
    }
    printf("%d",c);
}
