#include<stdio.h>
int main(){
	int i,j,s,n;
	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 {
	 	for(s=0;s<2*(n-i-1);s++)
	 	 { printf(" ");
		  }
	 	for(j=0;j<(2*i +1);j++)
	 	 { printf("* ");
		 }
		 
		 printf("\n");
		 
	 }
	 
	 	for(i=0;i<n-1;i++)
	 {
	 	for(s=0;s<2*(i+1);s++)
	 	 { printf(" ");
		  }
	 	for(j=0;j<(2*(n-i-2)+1);j++)
	 	 { printf("* ");
		 }
		 
		 printf("\n");
		 
	 }
	 
	 
	return 0;
}
