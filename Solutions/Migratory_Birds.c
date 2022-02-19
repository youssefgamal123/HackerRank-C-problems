#include <stdio.h>

void main (void){

int size ;
int i;
scanf("%d",&size);
int numbers[size];

for (i=0;i<size;i++)
scanf("%d",&numbers[i]);


for (i=0;i<size;i++){
  if (numbers[i]==numbers[i+1])
      printf("%d\n",numbers[i]);      ;
}









}
