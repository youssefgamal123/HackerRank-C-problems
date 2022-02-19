#include <stdio.h>




void main(void){

int s ;
scanf("%d",&s);
int arr[s];
int i ;
for (i=0;i<s;i++)
scanf("%d",&arr[i]);

int rev[s];
int c = 0 ;
for (i=s-1;i<=s;i--){

rev[c]=arr[i];
c++;
if (i<0)
break;
}

for (i=0;i<s;i++)
printf("%d\n",rev[i]);




}
