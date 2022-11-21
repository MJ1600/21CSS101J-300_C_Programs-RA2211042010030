#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter the number:");
scanf("%d",&n); 

for(i=0;i<n;i++) 
  {
     printf("\n");     
     for(j=0;j<n;j++) 
         {
           if(i%2==0)     
            {
              if(j%2==0)     
              printf("-");
              else
              printf("a");
            }
           else
              printf("-");  
         }
 }
