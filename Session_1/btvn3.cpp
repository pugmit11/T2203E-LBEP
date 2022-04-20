#include <stdio.h>
#include<math.h>
int main (){
    // input a
	float a;
	scanf ("%f",&a);
	// input b
	float b;
	scanf ("%f",&b);
	// input c
	float c;
	scanf ("%f",&c);
	if ((a+b)<c){
		// a,b,c khong phai la ba canh cua mot tam giac
		printf ("a,b,c khong la ba canh cua mot tam giac");
	}else{
	if ((a+b)>c){
		if (abs(a-b)>c){
			// a,b,c khong la ba canh cua mot tam giac
			printf ("a,b,c khong la ba canh cua mot tam giac");
		}else{
		if (abs(a-b)<c){
			// a,b,c la ba canh cua mot tam giac
			printf ("a,b,c la ba canh cua mot tam giac \n");
			
			// chu vi tam giac abc 
			float P=a+b+c;
			printf ("chu vi tam giac la: %f \n", P);
			
			// dien tich tam giac abc
			float p=P/2;
			float S=sqrt(p*(p-a)*(p-b)*(p-c));
			printf ("dien tich tam giac abc: %f \n", S);
		}
		}
	}
	}
}
