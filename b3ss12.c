#include <stdio.h>
int value(int a){
	int factorial=1;
	for(int i=1;i<=a;i++){
		factorial=factorial*i;
	}
	printf("%d", factorial);
	return factorial;
}

int main(){
	value(5);
	return 0;
}

