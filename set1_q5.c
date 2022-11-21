#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter bid(Alice, Bob, Charlie) : ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b&&a>c)
    { printf("Alice");
}
    if(b>a&&b>c)
    {printf("Bob");
}
    if(c>a&&c>b)
    {printf("Charlie");}
}
