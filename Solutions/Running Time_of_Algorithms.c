#include <stdio.h>


/*

reecvice size of array
then reecvice array
then sort the array and with every shift increase it by one








*/

int main (void){

int shift =0;
int size;
int temp;
int i,j;
scanf("%d",&size);
int numbers[size];

for (i=0;i<size;i++)
scanf("%d",&numbers[i]);

// selection sorting

for(i=0;i<size-1;i++)
for(j=i+1;j<size;j++)
{
if (numbers[i]>numbers[j]) {
  int temp;
  temp=numbers[i]; //  temparory variable to store the previous value of data[i]
  numbers[i]=numbers[j];
  numbers[j]=temp;
shift++;

}


}









printf("%d",shift);

return 0 ;




}
