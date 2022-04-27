#include <stdio.h>
void reverse(int* ary, int n){    
    for (int i = 0; i < n / 2; ++i) {
        int temp = ary[i];
        ary[i] = ary[n - i - 1];
        ary[n - i - 1] = temp;
    }
}
	void show_ary(int ary[], int n){
		printf("Mang duoc dao nguoc: ");
  		for(int i = 0; i < n; i++)  printf("%d ", ary[i]);  
  			printf("\n");
	}
	int main(void){
    int n;
    	printf("Nhap n: ");
    	scanf("%d",&n);
    	int ary[100];
    	for(int i=0;i<n;i++){
    	printf("Nhap a[%d]= ",i);
    	scanf("%d",&ary[i]);
		}
    	reverse(ary, n);
    	show_ary(ary,n);
    return 0;
}
