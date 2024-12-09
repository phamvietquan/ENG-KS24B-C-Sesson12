#include <stdio.h>
void inCacPhanTuTrongMang( int arr[], int size){
	for(int i=0;i<size;i++){
		printf("%d\t", arr[i]);
	}
}

int main(){
	int number[]={2,9,0,8,2,0,0,6};
	int size = sizeof(number)/sizeof(number[0]);
	inCacPhanTuTrongMang(number,size);

	return 0;
}

