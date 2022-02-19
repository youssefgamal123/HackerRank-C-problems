/*
initalize a variable = 0
count up from 0 to the targeted pages

if number of pages -targeted page = 1
return 0






*/





#include <stdio.h>

int main(){

int i ;
int n ;// number of pages [length of book]
int p ; // targeted page to reach to
int v_t =0 ; // our variable to count from
int c=-1; // counter

scanf("%d",&n);
scanf("%d",&p);

if (n-p==1){
  printf("0");
}

else {

for (i=0;i<n;i++){
  if(v_t==p){
    c=c;

  }else {
    v_t++;
    c++;
    continue;
  }


}
printf("%d",c);
}







}
