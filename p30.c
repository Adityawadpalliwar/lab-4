// cheak this code 
// might be some issues

#include<stdio.h>
int main()
    {
       int n,i;
       
       printf("enter the n\n");
       scanf("%d",&n);
       
       for(i=0;i<n;i++)
       {
          for (int s=0; s<i; s++)
          printf(" ");
          
          printf("*");

          for (int j=0 ; j< n-2*i+1; j++)
          printf("-");

          if (i+1<n)
          printf("-*");

           printf("\n");
       }
       return 0;
    }