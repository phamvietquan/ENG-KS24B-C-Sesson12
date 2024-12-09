#include <stdio.h>
void soNguyenTo(int a){
		int count=0;
        for(int i=1; i<=a; i++){
		    if( a % i ==0){
		        count++;
       	    }
		}
	    if(count==2){
            printf("%d la SO NGUYEN TO\n", a);
		}else {
        printf("%d khong phai la SO NGUYEN TO\n", a);
    	}
}
int main(){
	int num1,num2;
printf("Moi ban nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Moi ban nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    
    soNguyenTo(num1);
    soNguyenTo(num2);
   
	return 0;
}

