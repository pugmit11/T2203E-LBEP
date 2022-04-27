#include <stdio.h>

void menu(){
	printf("TINH TOAN\n");
	printf("================\n");
	printf("1. Nhap so\n");
	printf("2. Tinh Tong\n");
	printf("3. Tinh Hieu\n");
	printf("4. Tinh tich\n");
	printf("5. Tinh Thuong\n");
	printf("6. Thoat\n");
	printf("================\n");
	printf("Vui long chon chuc nang:");
}
int tinhTong(int a,int b){
	return a+b;
}
int tinhHieu(int a,int b){
	return a-b;
}
int tinhTich(int a,int b){
	return a*b;
}
double tinhThuong(int a,int b){
	return b!=0?(double)a/b:NULL;
}
void nhapSo(int *a,int *b){
	printf("Nhap so thu nhat:");
	scanf("%d",a);
	printf("Nhap so thu hai:");
	scanf("%d",b);
}
int main(){
	int m,a,b;
	bool f = false;
	do{
		menu();
		scanf("%d",&m);
		switch(m){
			case 1:{
				nhapSo(&a,&b);
				f = true;
				break;
			}
			case 2:{
				if(!f){
					printf ("vui long nhap lai hai so truoc\n");
					break;
				}
				int c= tinhTong(a,b);
				printf ("tong la: %d\n",c);
				break;
			}
			case 3:{
				if(!f){
					printf ("vui long nhap lai hai so truoc\n");
					break;
				}
				int c= tinhHieu(a,b);
				printf ("hieu la: %d\n",c);
				break;
			}
			case 4:{
				if(!f){
					printf ("vui long nhap lai hai so truoc\n");
					break;
				}
				int c= tinhTich(a,b);
				printf ("tich la: %d\n",c);
				break;
			}
			case 5:{
				if(!f){
					printf("Vui long nhap gia tri 2 so truoc\n");
					break;
				}
				double c = tinhThuong(a,b);
				if(c==NULL){
					printf("Khong the chia cho 0\n");
				}else{
					printf("Thuong: %lf\n",c);
				}
				break;
			}
		}
	}while(m!=6);
}
