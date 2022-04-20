#include <stdio.h>
int main (){
		int n;
		printf ("nhap n:");
		scanf ("%d",&n);
		int x0=0,x1=1,x2=1;
		int i=3;
		
		while (i<=n){
			x0=x1;
			x1=x2;
			x2=x1+x0;
			i++;
		}
		printf ("so thu %d trong day fibonacci la: %d",n,x2);
}

