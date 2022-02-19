#include <stdio.h>



void main (void){

int i ,j ;

int n ,k ;
int c=0;
scanf("%d%d",&n,&k);
int numbers[n];
for (i=0;i<n;i++)
scanf("%d",&numbers[i]);






for (i=0;i<n;i++)
for (j=1;j<n;j++)
{
  int x = numbers[i]+numbers[j];

if  ( (x%k)==0) {
  c++;
}



}


printf("%d",c);










}
