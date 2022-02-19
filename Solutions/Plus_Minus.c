#include <stdio.h>

/*

recive size of array
claculate postive and devide it over total size and negative over total size and zeroes


*/
void main (void){

int n,i,p=0,nn=0,z=0;
scanf("%d",&n);
int numbers[n];

for (i=0;i<n;i++)
scanf("%d",&numbers[i]);

// scan on postive numbers
for (i=0;i<n;i++){
if (numbers[i]>0)
p++;
else if(numbers[i]<0)
nn++;
else z++;


}


printf("%.5f\n%.5f\n%.5f",(float)p/n,(float)nn/n,(float)z/n);




}
