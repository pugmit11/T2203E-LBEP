#include <stdio.h>
#include <math.h>

int chuVitamgiac (float a,float b,float c){
	float P=0;
	P=a+b+c;
	printf ("chu vi tam giac la %f",P);
	return P;
}

int dienTichtamgiac (float a,float b,float c){
	float S=0;
	float p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf ("\n dien tich tam giac la %f",S);
	return S;
}
