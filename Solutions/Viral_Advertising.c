/*

loop through days

firstly shared = 5

then liked = share/2;
share = liked*3;  as the people who liked the ad will share it with 3

coumlative += liked





*/

#include <stdio.h>

void main(void){

int n ;
int i ;
int share,liked;
int comulative= 0 ;
scanf("%d",&n);

share = 5 ;
for (i=0;i<n;i++){

liked = (share/2);
comulative += liked;
share = liked*3;

}

printf("%d\n",comulative);




}
