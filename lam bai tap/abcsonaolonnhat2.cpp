#include <stdio.h>
int main (){
	// input a
	int a;
	scanf("%d",&a);
	// input b
	int b;
	scanf("%d",&b);
	// input 
	int c;
	scanf("%d",&c);

	int max;
	max=a;
	
	if (b>max){
		max=b;
	}
	if (c>max){
	    max=c;
	}
	printf("so lon nhat: %d",max);
}
