int findDigits(int n) {
int n2=n; // takes the number
int counter= 0 ; // our counter
while(n2>0)
{
int r =n2%10; // getting last number
// 123 -> r = 3 
if (r!=0 && n%r==0) // checking on the last number
counter++;

n2 = n2/10; // 123 -> 12

}
return counter ;
}
