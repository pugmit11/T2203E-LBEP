#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
	scanf ("%d",&a[i]);
    }
	int S=0;
    int c=0;
    for(int i=0;i<n;i++){
		if (a[i]%2!=0&&i%2==0){
			S+=a[i];
			c++;
	    }	
	}
	float d=S/float(c);
	printf("trung binh cong cua cac so le o vi tri chan trong mang so la %f",d);
}
	    
