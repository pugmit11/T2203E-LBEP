#include <stdio.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d",&n);
    int i=1;
    while(i<n&&n%i==0){
    	int s;
    	s+=i;
    	i++;
	}
	printf ("tong cac uoc cua n %d",i);
	
}
