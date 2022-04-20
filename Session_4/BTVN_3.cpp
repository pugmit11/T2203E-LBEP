#include <stdio.h>
int main (){
	int n;
	printf ("nhap so ");
	scanf ("%d",&n);
	int s;
	int i;
	for(;n!=0;){
		i=n%10;
		s+=i;
		n/=10;
	}
	printf("tong cac chu so cua %d la %d",n,s);
}

