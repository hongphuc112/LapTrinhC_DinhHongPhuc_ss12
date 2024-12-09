#include <stdio.h>
int factorial(int n){
	int result=1;
	for(int i=1; i<=n; i++){
		result*=i;
	}
	return result;
}
int main(){
	int number;
	printf("Nhap so nguyen: ");
	scanf("%d", &number);
	int result = factorial(number);
	printf("Giai thua cua %d la: %d\n", number, result);
	return 0;
}
