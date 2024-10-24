#include<stdio.h>
int main(){
	int i,j,n,k,s;
	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<i+1;j++)
	 	 { printf("* ");
		 }
		 for(s=0;s<4*(n-i-1);s++)
		 {printf(" ");
		 }
		 for(k=0;k<i+1;k++)
		 {printf("* ");
		 }
		 printf("\n");
	 }
	 
		for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n-i;j++)
	 	 { printf("* ");
		 }
		 for(s=0;s<4*i;s++)
		 {printf(" ");
		 }
		 for(k=0;k<n-i;k++)
		 {printf("* ");
		 }
		 printf("\n");
	 }
	return 0;
}
