#include <stdio.h>

int answer(int a[],int n);
int main (void){

int n ;
int i , j;
scanf("%d",&n);

int Numbers[n];

for (i=0;i<n;i++)
scanf("%d",&Numbers[i]);


// sorting

int temp;

for(i=0; i<n; i++)
 {
     for(j=i+1; j<n; j++)
     {
         if(Numbers[j] < Numbers[i])
         {
             temp = Numbers[i];
             Numbers[i] = Numbers[j];
             Numbers[j] = temp;
         }
     }
 }


 printf("%d",answer(Numbers,n));





}

int answer(int a[],int n)
    {
    int i,j,count=0,max=0;
    for(i=0;i<n;i++)
        {
        count = 0;
        for(j=i+1;j<n;j++)
            {
            if((a[j]-a[i]==1)||(a[j]-a[i]==0))
                count++;
        }
        if(max<count)
            {
            max = count;
        }
        else
            {

        }
    }
    return max+1;
}
