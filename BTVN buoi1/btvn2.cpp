#include <stdio.h>
#include <math.h>
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
	
	if(a==0){
		// phuong trinh co nghiem
		float x=-c/b;
		printf ("phuong trinh co nghiem: %f",x);
	}else{
	if(a!=0){
		float dt=b*b-4*a*c;
		    if(dt<0){
			   // phuong trinh vo nghiem
			   printf ("phuong tring vo nghiem");
		    }else{
		    if(dt>0){
			   // phuong trinh co hai nghiem 
			   float x1=(-b+sqrt(dt))/(2*a);
			   float x2=(-b-sqrt(dt))/(2*a);
			   printf ("phuong tring co hai nghiem: %f, %f",x1, x2);
		    }else{
			if (dt==0){
			   // phuong trinh co nghiem kep
			   float x=-b/(2*a);
			   printf ("phuong trinh co nghiem kep: %f",x);
			   }
		       }
	           }
        }
        }
}  
