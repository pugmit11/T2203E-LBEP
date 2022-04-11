#include <stdio.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d",&n);
	int t=0;
	int i=1;
	
	while (i<n){
		if (n%i==0)
		    t+=i;
	    	i++; 
	}
	printf ("tong cac uoc cua %d la: %d",n,t); 
}
