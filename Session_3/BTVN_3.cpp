#include <stdio.h>
int main (){
	int n;
	printf ("nhap n:");
	scanf ("%d",&n);
	int i=1;
	int d=0;
	
	while (i<n){
		if (n%i==0)
		d+=i;
		i++;
	}
	if(d==n){
		printf ("%d la so hoan hao", n);
	}else{
		printf ("%d khong la so hoan hao", n);
	}
	
}
