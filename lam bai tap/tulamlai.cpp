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
	
	if (a>b){
		if (a>c){
		// a la so lon nhat
		printf ("a la so lon nhat");
	    }else{
		if (a<c);
		// c la so lon nhat
		printf ("c la so lon nhat");
	}
	}else{
	if (a<b){
		if (c<b);
		// b la so lon nhat
		printf ("b la so lon nhat");
	    }else{
	    	if (b<c);
	    	// c la so lon nhat
	    	printf ("c la so lon nhat");
	}
}
}
