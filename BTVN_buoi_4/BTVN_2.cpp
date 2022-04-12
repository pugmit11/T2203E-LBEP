#include <stdio.h>
int main (){
	int a,b;
	printf ("nhap 2 so :");
	scanf ("%d%d",&a,&b);
	int ucln;
	int bcnn;
	
	for (ucln=a; ucln>=1; ucln--){
		if (a%ucln==0&&b%ucln==0){
			printf ("uc chung lon nhat la %d\n",ucln);
			break;
		}
	}
	for (bcnn=a; bcnn<=a*b; bcnn++){
		if (bcnn%a==0&&bcnn%b==0){
			printf ("boi chung nho nhat la %d",bcnn);
			break;
		}
	}
}

