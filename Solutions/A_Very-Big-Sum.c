#include <stdio.h>


void main (void){

int size;
int i ;
scanf("%d",&size);
int numbers[size];
long long  sum=0;

for (i=0;i<size;i++)
scanf("%d",&numbers[i]);



for (i=0;i<size;i++)
sum+=numbers[i];


printf("%lli\n",sum);









}
