/*

take string
take n

calculte how many a in the string

devide n/length of string to get how many complete
string we can have
multiply the counter in the qotient
if the devison had a reminder so we need to add it up aswell














*/












#include <stdio.h>
#include<string.h>
#define MAX 100
int main(void)
{
    char str[MAX];
    long n, count=0;
    int i;
    gets(str);
    scanf("%ld", &n);
    for(i=0;i<strlen(str);i++)
        if(str[i]=='a')
            count++;
    count*=(n/strlen(str)); // multipling counter with the number of a's in the substring
    for(i=0;i<n%strlen(str);i++) // adding the number of a's in the reminder 
        if(str[i]=='a')
            count++;
    printf("%ld", count);
    return 0;
}
