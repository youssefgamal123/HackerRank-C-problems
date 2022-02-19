#include <stdio.h>


int main (){

int s_price, discount,min,money;
int  i = 0 , counter = 0 ;

scanf("%d%d%d%d",&s_price,&discount,&min,&money);


while((money-s_price) >= 0)
{
    money = money - s_price;
    counter++;

    if((s_price - discount) >= min)
        s_price = s_price - discount;
    else
       s_price = min;


       
}





printf("%d\n",counter);

return 0 ;




}
