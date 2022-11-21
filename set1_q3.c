#include <stdio.h>

int main()
{
    //declaring the variables
    int N, M;
    //finding the number of friends
    printf("Number of friends: ");
    scanf("%d", &N);
    //finding the number of left shoes
    printf("Number of left shoes: ");
    scanf("%d", &M);
    //Output
    printf("Number of extra pairs of shoes to be bought: %d\n", N-M);
    printf("Number of right shoes to be bought: %d\n", M);
}
