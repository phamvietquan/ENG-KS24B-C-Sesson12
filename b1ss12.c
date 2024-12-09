#include <stdio.h>
int sum(int a, int b){
	printf("Tong hai so %d va %d la: %d", a,b, a+b);
	return a+b;
}

int main(){
	sum(3,4);

	return 0;
}

