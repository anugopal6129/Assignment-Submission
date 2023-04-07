#include<stdio.h>
int main(){
    int a[10];
	int i,n,num ,sum=0,b;
	
	printf("Enter size:");
	scanf("%d",&n);
	printf(" The odd elements are :\n");
	for(i=1;i<=n;i++){
        printf("%d\t",2*i-1);
	    sum=sum+(2*i-1);
    }
    b=n*n;
   if(sum=b){
	    printf("\nsum is equal to n^2\n");
   }else{
        printf("\nSum is not equal to n^2:\n");
    }
    return 0;
}