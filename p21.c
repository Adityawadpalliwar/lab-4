#include<stdio.h>
int main(){
	int i,j,n,k;
	printf("enter the starting integer \n>>>");
	scanf("%d",&k);
	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<i+1;j++)
	 	 { printf("%d ",k);
		 }
		 k++;
		 printf("\n");
	 }
	 
		for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n-i;j++)
	 	 { printf("%d ",k-1);
		 }
		 k--;
		 printf("\n");
	 }
	return 0;
}