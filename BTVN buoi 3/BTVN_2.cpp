#include <stdio.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d",&n);
    int i=0;
    int max=0;
    
    while (i<n){
    	if ((i%2==0&&i%3==0));
    	max=i;
    	i++;
	}
	printf ("so lon nhat nho hon %d chia het cho 2 va 3 la: %d",n,max);
}
