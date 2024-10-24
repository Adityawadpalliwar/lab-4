#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 {
	 	for(j=0;j<n-i+1;j++)
	 	 { printf("%c",i+64);
		 }
		 printf("\n");
	 }
	return 0;
}
