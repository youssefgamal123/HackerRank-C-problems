int jumpingOnClouds(int c_count, int* c) {

int i = 0 ;
int counter = 0 ;
while (i<c_count){

if (i+2<c_count&& c[i+2]==0){
  i = i+2 ; // increament the index by 2 ;
  counter++ ; // increament counter

}else {
  i +=1;
  counter+=1;
}

}

return counter-1;



}
