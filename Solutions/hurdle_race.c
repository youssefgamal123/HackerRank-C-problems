/*

get the max height that the charchter can jump
if he can jump all the hurdles then return 0 doses
if there is a hurdle highet than his max
dose = hurdle highet - max height


// get highest element in array and if that number is bigger than the
highest hurdles charchter can jump cal . doses





*/


#include <stdio.h>

int main () {

int ans;
int k,n;
int max=0;
int i ;

scanf("%d%d",&n,&k);
int highets[n];

for (i=0;i<n;i++)
scanf("%d",&highets[i]);


// get max elemnt in array

for (i=0;i<n;i++){
if (highets[i]>max)
max=highets[i];


}

if (max>k)
ans =max-k; // calculating doses

printf("%d",ans);

return 0 ;


}
