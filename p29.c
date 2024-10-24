#include<stdio.h>
int main()
{
	int i,j,s,n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	if (i%2==0)
	  {
	   for(s=0;s<n-i-1;s++)
	   {printf(" ");
	   }
	   for(j=0;j<i+1;j++)
	   {printf("*");
	   }
	   printf("\n");
	  }
	  
    
	else
	  {
	   for(s=0;s<n-i-1;s++)
	   {printf(" ");
	   }
	   for(j=0;j<i+1;j++)
	   {printf("-");
	   }
	   printf("\n");
	  }
	  
	}
	for (i=0;i<n-1;i++)
	{
	if (i%2==0)
	  {
	   for(s=0;s<n-i-1;s++)
	   {printf(" ");
	   }
	   for(j=0;j,j<i+1;j++)
	   {printf("*");
	   }
	   printf("\n");
	  }
	  	else
	  {
	   for(s=0;s<n-i-1;s++)
	   {printf(" ");
	   }
	   for(j=0;j<i+1;j++)
	   {printf("-");
	   }
	   printf("\n");
	  }
	  return 0;
    }
}
