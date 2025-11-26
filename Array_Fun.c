/*Using Array as function to check each element is Even or Odd. */
#include <stdio.h>
void check(int);
int main() {
	int arr[10],i,n;
	printf("How many elements?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		printf("\nEnter the elements of array:");
		scanf("%d",&arr[i]);
		check(arr[i]);
	}
	return 0;
}

void check(int num) {
	if(num%2==0){
		printf("%d is an even number.",num);
	}
	else{
		printf("%d is an odd number.",num);
	}
}
