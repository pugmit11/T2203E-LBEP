#include <stdio.h>
int main (){
	int n;
	printf ("nhap chu so n=");
	scanf ("%d",&n);
	
	bool f=true;
	int a=n;
	while (a!=0){
		int b=a%10;
		if (b%2==0){
			f=false;
			printf ("%d khong phai toan chu so le",n);
			break;
		}
		a/=10;
	}
	if (f){
		printf ("%d toan chu so le",n);
	}
}
