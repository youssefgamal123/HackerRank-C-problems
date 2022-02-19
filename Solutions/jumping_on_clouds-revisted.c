int jumpingOnClouds(int c_count, int* c, int k) {

int energy=100;
int  i = 0 ;

while(i!=c_count){

  i+=k;

  if (i>c_count)
  i = i-c_count;

  energy--;

  if (c[i]==1)
  energy=energy-2;


}
if (c[0]==1)
energy=energy-2;



return energy;
}
