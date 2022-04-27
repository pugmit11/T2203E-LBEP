#include <stdio.h>
int main (){
	int n;
	printf ("nhap n :");
	scanf ("%d",&n);
    int i=0;
    int max =0;
    while (i<n){
    	if (i%6==0){
    		if (i>max){
    			max=i;
			}	
		}
		i++;
	}
	printf ("so chia het cho 2 va 3 lon nhat nho hon n la %d",max);
}
