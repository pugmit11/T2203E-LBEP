#include <stdio.h>
int main (){
	int n;
	printf (" nhap so n: ");
	scanf ("%d",&n);
	int a[n];
	for (int i=0; i<n; i++){
		scanf ("%d",&a[i]);
	}
	int x=0;
	int j=0;
	for (int i=0;i<n;i++){
		if (a[i]%2!=0){
			x+=a[i];
				j++;
		}
		}
	printf (" trung binh cong cua cac so le la %f",(float)x/j);
	}

