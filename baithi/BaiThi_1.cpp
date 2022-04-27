#include <stdio.h>
#include <math.h>
int main (){
	int n;
	float s=0;
	int i=1;
	do {
		printf ("nhap n=");
		scanf ("%d",&n);
		if (n<1){
			printf ("nhap lai n");
		}
	}while(n<1);
	while (i<=n){
		s=s+1.0/(float)i;
		i++;
	}
	printf ("tong cua day so la %f",s);
	
}
