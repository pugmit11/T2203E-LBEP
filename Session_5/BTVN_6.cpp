#include <stdio.h>
int main(){
	
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	int i;
	int arr[n];
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	int max=0;
	int	c=0;
	for(i=0;i<n;i++){		
		if(arr[i]>=0){		
			c++;
			if(c>max){
			max=c;
		}
	}else{
			c=0;
		}
	}
	printf("chuoi so duong dai nhat la %d",max);
}
