#include <stdio.h>
int inSoLonNhatTrongMang( int arr[], int size){
	int max=0;
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("So lon nhat trong mang la: %d", max);
	return max;
}

int main(){
	int number[]={2,9,0,8,2,0,0,6};
	int size = sizeof(number)/sizeof(number[0]);
	inSoLonNhatTrongMang(number,size);

	return 0;
}

