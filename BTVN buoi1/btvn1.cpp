#include <stdio.h>
int main (){
	// input a
	int a;
	scanf ("%d",&a);
	// input b
	int b;
	scanf ("%d",&b);
	// input c 
	int c;
	scanf ("%d",&c);
	int min;
	min=a;
	 
	 if(b<min){
	 	min=b;
	 }
	 if(c<min){
	 	min=c;
	 }
	 printf ("so nho nhat la %d",min);
}
