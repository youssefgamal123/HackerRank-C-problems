/*

reccvie size of array and the item that wasn't eaten

add the bill except for item that was not eated
total /2 == share

if share == question
then print bonappitet
else print charged-actual // always int because charged > actual






*/
#include <stdio.h>
void main(void){

int n ,share ,item,total=0;
int paid ;
int i ;
scanf("%d %d",&n,&item);

int bill[n];
for( i = 0 ; i<n;i++)
scanf("%d",&bill[i]);


scanf("%d",&paid);



for (i=0;i<n;i++)
total+=bill[i];


total=total-bill[item];
share = total/2;

if (share==paid)
printf("Bon Appetit\n");

else printf("%d\n",paid-share);






}
