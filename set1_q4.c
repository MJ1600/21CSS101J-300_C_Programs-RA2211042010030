int main()
{
    int N, X, Y;
    
    printf("Number of problems = ");
    scanf("%d", &N);
    
    printf("The Maximum score for each question = ");
    scanf("%d", &X);
    
    printf("The score Amala wants = ");
    scanf("%d", &Y);
    
    if((N*X) != Y)
    {
        printf("Yes\n");
    }
    else
    { 
        printf("No\n");
    }
}
