#include <stdio.h>
int main (){
	int a;
	int b;
	do{
	printf ("nhap so a= ");
	scanf ("%d",&a);
	printf ("nhap so b=");
	scanf ("%d",&b);
    }while (!(b > a && a > 0));
    for (int i=a;i<=b;i++){
    	int c=0;
    	for(int j=1; j<=i; j++){
    		if (i%j==0){
    			c++;
			}
		}
		if(c==2){
				printf ("so nguyen to : %d\n",i);
		}
	}
}
