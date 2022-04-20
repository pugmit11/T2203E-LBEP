#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int a[10];
	for(int i=0;i<n;i++){
	scanf ("%d",&a[i]);
    }
    int x;
	printf("nhap x = ");
	scanf("%d",&x);
	bool f=true;
    for (int i=0;i<n;i++){
    	if (a[i]==x)
    	f=false;
    }
    if(f){
    	printf ("x khong co trong mang");
	}else{
		printf ("x thuoc trong mang");
	}
}
