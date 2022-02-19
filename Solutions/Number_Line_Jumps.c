#include <stdio.h>


int main(void){
int x1,x2,v1,v2,p1=0,p2=0;

scanf("%d%d%d%d",&x1,&v1,&x2,&v2);


do {
  p1+=x1+v1;
  p2+=x2+v2;




} while(p1!=p2);

if(p1==p2)
printf("Yes\n");
else printf("No \n");











}
