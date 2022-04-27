#include <stdio.h>
int main(){
	
	int n;
	int i;
	int s;
	printf("Nhap so: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	int sm=0;
	s=0;
	for(i=0;i<n;i++){		
		if(arr[i]>=0){		
			s+=arr[i];
			if(s>sm){
				sm=s;
	    	}
	}else{
			s=0;
		}
	}
	printf("tong chuoi so duong dai nhat la %d",sm);
}
