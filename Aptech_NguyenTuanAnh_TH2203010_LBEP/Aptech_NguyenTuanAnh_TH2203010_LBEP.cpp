#include<stdio.h>
#include<math.h>
#include "chuviDientich.h"

int main (){
	float a;
	float b;
	float c;
	printf ("canh a la:");
	scanf ("%f",&a);
	printf ("canh b la:");
	scanf ("%f",&b);
	printf ("canh c la:");
	scanf ("%f",&c);
	
	if(a+b>c&&a+c>b&&b+c>a){
		chuVitamgiac(a,b,c);
		dienTichtamgiac(a,b,c);
	}else{
		printf (" a,b,c khong la ba canh cua 1 tam giac");
	}
}

