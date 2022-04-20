#include <stdio.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d",&n);
    int i=1;
    int s;
    while (i<n){
    	if (n%i==0);
    	s+=i;
    	i++;
	}
	printf ("so lon nhat nho hon %d chia het cho 2 va 3 la: %d",s);
}
