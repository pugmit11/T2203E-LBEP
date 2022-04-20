#include <stdio.h>
int main(){
	int n;
	do{
	printf("Nhap so: ");
	scanf("%d",&n);
	}while(n<=0);	
	int a=0;
	int max=0;
	for(;n!=0;n/=10){	
		a=n%10;	
		if (a>max){
			max=a;
		}	
	}
	printf("chu so lon nhat la %d",max);
}

