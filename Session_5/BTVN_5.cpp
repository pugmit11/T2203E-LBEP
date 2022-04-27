#include <stdio.h>
int main (){
	int n;
	printf ("nhap n:");
	scanf ("%d",&n);
	int i;
	int arr[n];
	for (i=0;i<n;i++){
		scanf ("%d",&arr[i]);
	}
	int min=arr[i];
	for (i=0;i<n;i++){
		if (arr[i]<min&&arr[i]>=0){
			min=arr[i];
		}
	}
	printf ("so nguyen duong nho nhat trong mang la %d",min);
}
