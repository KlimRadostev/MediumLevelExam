int find_pivot(int *arr, int n)
{
	int right, left;
	right = left = 0;
	for(int i = 0; i < n; ++i) right += arr[i];
	
	for(int i = 0; i < n; ++i)
	{
		right -= arr[i];
		if (left == right) return (i);
		left += arr[i];
	}
	return (-1);
}

#include <stdio.h>

int main(){
	int e1[] = {1,2,3,4,0,6};
	int e2[] = {-5, 10, 2, 5};
	int e3[] = {1,100,0,0,1};
	int e4[] = {7,9,8};
	int e5[] = {0,50};

	printf("%i\n", find_pivot(e1, 6));
	printf("%i\n", find_pivot(e2, 4));
	printf("%i\n", find_pivot(e3, 5));
	printf("%i\n", find_pivot(e4, 3));
	printf("%i\n", find_pivot(e5, 2));
}
