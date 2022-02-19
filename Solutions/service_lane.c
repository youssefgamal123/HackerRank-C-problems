#include <stdio.h>

int main (){

int n , t ;
int i,testcase_i,testcase_j;
int j ;
int min ;
scanf("%d%d",&n,&t);

int widths[n];
for (i=0;i<n;i++)
scanf("%d",&widths[i]);



// test cases

for (i=0;i<t;i++){
scanf("%d%d",&testcase_i,&testcase_j);
min = widths[testcase_i];

for (j=testcase_i;j<testcase_j;j++){

if (widths[j+1]<min){
  min = widths[j+1];
}


}
printf("%d\n",min);
}


return 0;




}
