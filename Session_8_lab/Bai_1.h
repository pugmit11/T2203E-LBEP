#include <stdio.h>
#include <math.h>
int tongCacChuSo (int n){
	int s=0;
	while (n!=0){
		int i=n%10;
		s+=i;
		n/=10;
	}
	return s;
}

int chuVitamgiac (int a,int b,int c){
	int p=0;
	if (a+b>c&&a+c>b&&b+c>a){
		p=a+b+c;
		printf ("chu vi tam giac la %d",p);
	}
	return p;
}

int dienTichtamgiac (int a,int b,int c){
	float s=0;
	if (a+b>c&&a+c>b&&b+c>a){
		int p=a+b+c;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf ("dien tich tam giac la %f",s);
	}
	return s;
}

int  uocChunglonnhat (int a,int b){
	int max=0;
	for (int i=1;i<a;i++){
		max=1;
		if (a%i==0&&b%i==0)
			if (i>max);
			max=i;
	}
	return max;
}

int  boiChungnhonhat (int a,int b){
	int min=0;
	for (int i=1;i>a;i++){
		min=1;
		if (a%i==0&&b%i==0)
			if (i<min);
			min=i;
	}
	return min;
}
