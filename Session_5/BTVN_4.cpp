#include <stdio.h>
int main (){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int slcc;
	int arr[n];
	for (int i=0;i<n;i++){
		scanf ("%d",&arr[i]);
	}
	for (int i=0;i<n;i++){
		if (arr[i]%2!=0){
			slcc=arr[i];
		}
	}
	printf ("so le cuoi cung %d",slcc);

}
