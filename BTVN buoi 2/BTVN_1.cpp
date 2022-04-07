#include <stdio.h>
int main (){
	// nhap so nguyen n
	int n;
	printf ("nhap so nguyen n:");
	scanf ("%d",&n);
	if (n<2||n>8){
		printf ("day khong phai la ngay trong tuan");
	}else{
	    if (n==8){
	        printf ("day la chu nhat");
		}else{
			printf ("day la thu:%d",n);
		}
	}
} 
