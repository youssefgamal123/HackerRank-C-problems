#include <stdio.h>


int main(){
int res=0;
int t,n,m,s;
scanf("%d",&t);

while(t--){


scanf("%d%d%d",&n,&m,&s);
 res = ((m + s - 1) % n);
if (res==0)
res=n;



printf("%d\n",res);




}
return 0;








}
