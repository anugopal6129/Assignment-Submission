#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number to print multiplication table:\n ");
	scanf("%d",&n);
	printf("\nThe multiplication table is:\n");
	for(i=1;i<=10;i++){
	    printf("\n%d * %d = %d",n,i,(n*i));
    }
	return 0;
}