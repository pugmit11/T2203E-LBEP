#include <stdio.h>
#include <math.h>

int xMuy (int x, int y){
	int s=1;
	for (int i=0;i<y;i++){
		s=s*x;
	}
	return s;
}


int timMax (int *p,int n){
	int max =p[0];
	for (int i=0;i<n;i++){
		if (max<p[i]){
			max=p[i];
		}
	}
	return max;
}


bool checkSoNguyenTo(int number){
	if(number < 2){
		return false;
	}
	
	for(int i=2;i<sqrt(number);i++){
		if(number % i == 0){
			return false;
		}
	}
	
	return true;
}

void soNguyento (int arr[],int size){
	int max=0;
	for (int i=0;i<size;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	
	while(true){
		max++;
		if(checkSoNguyenTo(max)){
			break;
		}
	}
	
	printf("So nguyen to nho nhan lon hon cac gia tri cua mang la: %d",max);
}

bool timUocchung(int size,int arr[],int value){
	for (int i=0;i<size;i++){
		if(arr[i]%value!=0){
			return false;
		}
	}
	return true;
}


int uocChunglonnhat (int arr[], int size){
	int result = 0;
	int m=arr[0]?arr[0]:-arr[0];
	for (int i=1;i<=m;i++){
		if(timUocchung(size, arr, i)&&i>result){
			result=i;
		}
	}
	
	return result;
}


int timBCNN (int *p, int n){
	int m=p[0]>0?p[0]:-p[0];
	for (int i= m;;i++){
		bool f=true;
		for(int j=0;j<n;j++){
			if (i%p[i]!=0){
				f=false;
				break; 
			}
		}
		if(f){
			return i; 
		} 
	} 
	return 0;
}


