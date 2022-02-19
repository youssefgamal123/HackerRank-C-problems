#include <stdio.h>


int main (void)
{

int size;
int counter=0;
int i ;
int max =0;
scanf("%d",&size);
int numbers[size];
for (i=0;i<size;i++)
scanf("%d",&numbers[i]);


for (i=0;i<size;i++){
if (numbers[i]>max)
max=numbers[i];


}




for (i=0;i<size;i++){
if (numbers[i]==max){
  counter++;
}



}



printf("%d\n",counter);







return 0 ;




}
