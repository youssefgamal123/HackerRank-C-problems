/*


reccive 2 arrays

compare the two arrays with each other (who is bigger than who)
collect points for bob and alice
return array of result








*/
#include <stdio.h>

int  main (void){

int arra1[3];
int arra2[3];

  int i = 0 ;


int i_points=0;
int j_points=0;
int results[2];

  for (i=0;i<3;i++)
  scanf("%d",&arra1[i]);


  for (i=0;i<3;i++)
  scanf("%d",&arra2[i]);


// compare
for(int i=0;i<3;i++)
     {
     if(arra1[i]>arra2[i])
         i_points++;
     else if(arra2[i]>arra1[i])
         j_points++;
 }







printf("%d %d \n",i_points,j_points);

return 0 ;


}
