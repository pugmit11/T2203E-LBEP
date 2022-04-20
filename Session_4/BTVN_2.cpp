#include <stdio.h>
int main (){
	int n;
	printf ("nhap so :");
	scanf ("%d",&n);
	int t;
	int s=0;
	while (n!=0){
		t=n%10;
		n/=10;
		s+=t;
	}
	printf ("tong cac chu so cua n la %d",s);
}

