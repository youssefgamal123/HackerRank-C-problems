
/*

2d array to store square matrix
add the two diagonls in variables and then getting their diffrence



*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{

    int n, j;
    int i=0,RightDiagonalSum=0,LeftDiagonalSum=0, firstarray, secondarray;

 scanf("%d",&n);
    int a[n][n];

 for(int firstarray = 0; firstarray < n; firstarray++)
 {
       for(int secondarray = 0; secondarray < n; secondarray++)
    {

          scanf("%d",&a[firstarray][secondarray]);
       }
    }

  while(i<n)
  {
    RightDiagonalSum=RightDiagonalSum+a[i][i]; // d1 =[0][0]+[1][1]+[2][2]
    i++;
  }

 j=n-1,i=0;

  while(i<n)
  {
    LeftDiagonalSum=LeftDiagonalSum+a[i][j];    // d2 = [0][2]+[1][1]+[2][0]
    i++;
    j--;
  }

 printf("%d",abs(RightDiagonalSum-LeftDiagonalSum));
    return 0;
}
