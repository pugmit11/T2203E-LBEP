#include <stdio.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d",&n);
	int t0=0, t1=1, t2=1;
	
	while (t1+t2<n){
		t0=t1;
		t1=t2;
		t2=t1+t0;
	}
	printf ("so tiem can voi %d trong day Fibonacci la: %d",n,t2);
}
