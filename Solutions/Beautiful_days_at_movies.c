#include <stdio.h>
/*

take the starting day and ending day
loop through the in between numbers
for each number add it to it's reverse and divide it by the divsor
if it's evenly divsiable by k
then it's a good day
return how many days are good



*/

int reverse(int n );
int main (){


int starting_day;
int ending_day;
int divsor;
int i ;
int res=0;
int counter=0 ;
scanf("%d%d%d",&starting_day,&ending_day,&divsor);

// loop through the starting_day and ending_day and check

for (i=starting_day;i<=ending_day;i++)
{
//res=i+reversed i / divsor
// if it's evenly devided increament counter
// (just checking) printf("[%d] + [%d] /[%d] \n",i,reverse(i),divsor);
res = (i-reverse(i));
if (res<0)
res *=-1;
if (res%divsor==0)
counter++;


}



printf("%d\n",counter);



return 0 ;
}

int reverse(int n){
int r = 0;
  while(n!=0){
      r = r * 10;
       r = r + n%10;
       n = n/10;


  }

  return r ;
}
