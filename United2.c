#include <stdio.h>
#include<math.h>
void input( int a[], int n)
{int i;
for(i=0;i<=n-1;i++)
	{ printf("a[%d]=",i);scanf("%d,&a[i]");}
}
void output(int a[],int n)
{int i ;
for(i=0;i<=n-1;i++)
	printf("%d\t",a[i]);
}
int isPrime(int n)
{if(n<2) return(0);
int i;
for(i=2;i<=sqrt(n);i++)
if (n%i==0) return (0);
}
int main()
 {int a[100]; int n;
 printf("n=");scanf("%d",&n);
 int i;
 input(a,n);
 output(a,n);
	printf("\n");
for(i=0;i<=n-1;i++)
	if(isPrime(a[i]))
	printf("%d\t",a[i]);
printf("\n");
 }