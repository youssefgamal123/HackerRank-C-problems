
/*


read scores and sort them in an dsecnding order so that
the first score is the highest rank and what precdes it = rank+1



*/

#include <stdio.h>

int binarySearch(int[] a, int s , int key[]);
void main (void){
int index;
int s_l ; // to stre length of the leadboard scores array
int i ,j ; // counters
int temp; // used in selection sorting
 // to store scores of alice
int a_l; // to stoe size of alice_scores

printf("Enter size of leadboard scores : ");
scanf("%d",&s_l);
int lb_score[s_l]; // leadboard scores array with the length of scores on the leadboard
int ranks[s_l];
for (i=0;i<s_l;i++){
  printf("Enter score [%d]\n",i+1);
  scanf("%d",&lb_score[i]);
}

printf("Enter Size of alice_scores \n");
scanf("%d",&a_l);
int alice_scores[a_l];
int res[a_l]; // to return final result


for (i=0;i<a_l;i++){
printf("Enter score [%d] \n ",i+1);
scanf("%d",&alice_scores[i]);

}




// selection sorting in an descending order

for (i=0;i<s_l-1;i++)
for (j=i+1;j<s_l;j++){

if (lb_score[i]<lb_score[j]){
// arranging the array in an descending order
temp = lb_score[i];
lb_score[i]=lb_score[j];
lb_score[j]=temp;

}
}

// assiging the first element in array to the highest ranks
// and then the consective elements to the following rank
ranks[0]=1;

for (i=1;i<s_l;i++){

if (lb_score[i]==lb_score[i-1]) // checking if the consective element is equal to the highest element in array if it's then it assigns the same ranks
{
      ranks[i]=ranks[i-1];
}
else ranks[i]=ranks[i-1]+1;

}

// checking boundries if alice fist score is more than the highest scores
// so it reccives the highest rank
// and check on alice_scores if it's less than the least element in array then it reecives the following rank

for (i=0;i<a_l;i++){

if (alice_scores[i]==lb_score[0] ||alice_scores[i]>lb_score[0])
 // array sorted in descending so we are comparing with the highest ranks
{
res[i]=1;

}
else if (alice_scores[i]<lb_score[s_l-1]){
  res[i]=ranks[s_l-1]+1;

}
//else // do binary search

else {
  int index = binarySearch(lb_score[],s_l, alice_scores[]);
				res[i] = rank[index];
}

}



for(i=0;i<a_l;i++)
printf("%d\n",res[i]);






}

int binarySearch(int a [], int s , int key[]) {

		int lo = 0;
		int hi = s - 1;

		while (lo <= hi) {
			int mid = lo + (hi - lo) / 2;
			if (a[mid] == key) {
				return mid;
			} else if (a[mid] < key && key < a[mid - 1]) {
				return mid;
			} else if (a[mid] > key && key >= a[mid + 1]) {
				return mid + 1;
			} else if (a[mid] < key) {
				hi = mid - 1;
			} else if (a[mid] > key) {
				lo = mid + 1;
			}
		}
		return -1;
	}
