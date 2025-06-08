#include<stdio.h>
int main(){
	int i, n;
	printf(" Enter n =");
	scanf("%d", &n);
	while (n>10){
		printf(" n must be <= 10");
		printf("re_enter n:");
		scanf("%d\n", &n);
	} printf(" bang cuu chuong %d la : \n", n);
	for ( i =1 ; i<=10; i++){
		printf("\n%d %d*%d=%d", n,i,n*i);
	}
	return 0;
}