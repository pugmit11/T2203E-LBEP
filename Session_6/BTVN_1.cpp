#include <stdio.h>
int main (){
	int n;
	printf (" nhap n:");
	scanf ("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		scanf ("%d",&arr[i]);
	} 
	int x;
	printf ("nhap x:");
	scanf ("%d",&x);
	int gtxn=0;
	for (int i=0;i<n;i++){
		int a=0;
		if (arr[i]>x){
			a=arr[i]-x;
		}else{
			a=x-arr[i];
		}
		if (a>gtxn){
			gtxn=arr[i];
		}
	}
	printf ("gia tri trong mang xa x nhat la: %d",gtxn);
}
