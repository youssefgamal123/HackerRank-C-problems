


#include<stdio.h>


int main()


{


    int n,i,j,k;


    scanf("%d",&n); // size


    for(i=0;i<n;i++)


    {


        for(k=n-1;k>i;k--)//size -1


        {


            printf(" ");


        }


        for(j=0;j<i+1;j++)


        {


            printf("#");


        }


        printf("\n");


    }


    return 0;


}
