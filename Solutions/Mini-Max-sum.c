#include <stdio.h>

int main (void)
{

long int  numbers[5];
int i ,j;
//long int temp;
 long sum = 0 ;


for (i=0;i<5;i++)
scanf("%ld",&numbers[i]);


for (i=0;i<5;i++)
sum+=numbers[i];


 int  max=numbers[0];
int min=numbers[0];
// sorting
    for(int i=1;i<5;i++){
      if(numbers[i]>max)
          max=numbers[i];
      if(numbers[i]<min)
          min=numbers[i];
          }





// min
/*
for (i=0;i<4;i++)
min+=numbers[i];

for (i=1;i<5;i++)
max+=numbers[i];

*/
    printf("%ld %ld",sum-max,sum-min);



return 0 ;






}
