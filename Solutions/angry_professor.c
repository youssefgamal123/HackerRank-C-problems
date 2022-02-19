/*


The first line of input contains

, the number of test cases.

Each test case consists of two lines.

The first line has two space-separated integers,
and , the number of students (size of ) and the cancellation threshold.
The second line contains space-separated integers () that describe the arrival times for each studen


arrival time  <=0 [on time]
else not on time
check how many students arrived on time and compare them to
the count of students that should attend the class
if number is equal or greater than it then class will not be canclled
else cance



*/


#include <stdio.h>


int main(){

int i =0;
int t ; // no.of test cases
//int n ; // number of studentsx
//int k ; // cancellation threshold.
 // to count how many students attened the class
scanf("%d",&t);

for (int a0=0;a0<t;a0++){
int   count=0;
          int n;
          int k;
scanf("%d%d",&n,&k);
int time[n];
for (i=0;i<n;i++){
  scanf("%d",&time[i]);
}

for (i=0;i<n;i++){
  if (time[i]<=0)
    count++;
}

if (count<k)
printf("YES\n");
else printf("NO\n");



}
return 0 ;

}
