#include<stdio.h>
void main()
{

int n,i;

scanf("%d",&n);
for(i=2;i<=n;i++)
{if(n % i==0){break;}

if(i>=n/2&&n!=1){printf("ËØÊı");}

else {printf("ÖÊÊı");}}

}


