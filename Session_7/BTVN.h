#include <stdio.h>
#include <math.h>

int xMuy (int x, int y){
	int s=1;
	for (int i=0;i<y;i++){
		s=s*x;
	}
	return s;
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
	
	for (int i=1;i<=arr[0];i++){
		if(timUocchung(size, arr, i)&&i>result){
			result=i;
		}
	}
	
	return result;
}

