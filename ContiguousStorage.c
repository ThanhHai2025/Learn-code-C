//input 1 mảng các số nguyên gồm n phần tử
//Liệt kê ra m các sô có giá trị chẵn
//Liệt kê m các sô là palindrom
//Liệt kê m các sô là prime

#include<stdio.h>
#include<math.h>
int palindrom(int n){
 int old=n;
 int newN=0;
 while(n>0){
 newN=newN*10+ n%10; 
 n=n/10; 
 }
 if(newN==old)
   return 1;
  else
   return 0; 
}

int prime(int n){
 if(n<2) return 0;
 int i;
 for(i=2;i<n;i++)
   if(n%i==0) 
       return 0;
 return 1; 
}	
	
void Input(int *a, int *n){
	printf("n="); scanf("%d",n);
	int i; 
	for(i=0; i<*n; i++)
	scanf("%d", &a[i]);
}

void output(int a[], int n){
	int i;
	printf("\n Output a[]= ");
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
}

void D_even(int a[], int n){
	int i;
	printf("\n Output a[] Even= ");
	for(i=0; i<n; i++)
	if(a[i]%2==0)
	printf("%d\t", a[i]);
}

void D_palindrom(int a[], int n){
	int i; 
	printf("\n Output a[] Palindrom= ");
	for(i=0; i<n; i++)
	if(palindrom(a[i])==1)
	printf("%d\t", a[i]);
}

void D_prime(int a[], int n){
	int i; 
	printf("\n Output a[] Prime= ");
	for(i=0;i<n;i++)
	if(prime(a[i])==1)
	printf("%d\t", a[i]);
}

void bubsort(int *a, int n){
	int i, j;
	int temp;
	for(i=0; i<n-1; i++)
		for(j=n-1; j>i; j--)
		if (a[j]<a[j-1]){
		temp =a[j];
		a[j] = a[j-1];
		a[j-1] = temp;
	}
}



int main(){
	int a1[50];
	int n1;
	Input(a1,&n1); 
	output(a1,n1); 
	D_even(a1,n1); 
	D_palindrom(a1,n1); 
	D_prime(a1, n1); 
	bubsort(a1, n1);
	output(a1,n1);
	return 0;
}

