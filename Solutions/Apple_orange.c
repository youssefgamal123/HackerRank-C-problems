#include <stdio.h>



int main(void){


  int s ,t ,a,b,m,n;
  int i ;
  int added_apples;
  int added_oranges;
  int c_a=0;
  int c_o = 0 ;



scanf("%d%d",&s,&t); // range beet 3am sam  validate fel a5ar b3d al gm3



scanf("%d%d",&a,&b); // distance at wich apple trees and oranges are located respective to sam house
// add behom al apples and oranges

scanf("%d%d",&m,&n); // size of apple and oranges arrays

int apples[m] ;
int oranges [n];

for (i=0;i<m;i++)
scanf("%d",&apples[i]);




for (i=0;i<n;i++)
scanf("%d",&oranges[i]);

 // adding apples on a and oranges on b

for (i=0;i<m;i++)
apples[i]+=a;



for (i=0;i<n;i++)
oranges[i]+=b;


// validation of apples and oranges respective to sam house

for (i=0;i<m;i++){
  if(apples[i]>=s && apples[i]<=t)
  c_a++;


}

for (i=0;i<n;i++){

  if(oranges[i]>=s && oranges[i]<=t)
  c_o++;


}


printf("%d\n",c_a);
printf("%d\n",c_o);
return 0 ;



}
