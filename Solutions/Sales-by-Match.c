#include <stdio.h>

int main (void){

int n ;
scanf("%d",&n);
int numbers[n];
int i ;
int j ;
int pairs,current,count;

for (i=0;i<n;i++)
scanf("%d",&numbers[i]);

// sorting

for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
{
if (numbers[i]>numbers[j]) {
  int temp;
  temp=numbers[i]; //  temparory variable to store the previous value of data[i]
  numbers[i]=numbers[j];
  numbers[j]=temp;


}



}

pairs=0;
current =numbers[0];
count = 1; // counter for the eqavialent socks

for (i=1;i<=n;i++)
if (numbers[i]==current){
count++;

if (count==2){
// 1 1 1 2 2 2
  pairs++;
  count-=2;

}

}
else {

current=numbers[i];
count =1 ;

}

printf("%d",pairs);

return 0 ;
}
