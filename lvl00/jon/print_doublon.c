#include <stdio.h>

void print_doublon(int *a, int na, int *b, int nb)
{
	int i, j, first; i = j = 0; first = 1;
	while (i < na && j < nb)
	{
		if (a[i] > b[j]) ++j;
		else if (a[i] < b[j]) ++i;
		else{
			if (!first) printf(" ");
			first = 0;
			printf("%i", i);
			++i; ++j;
		}
	}
	printf("\n");
}

int main(){
	int e1a[] = {1,2,10,15};
	int e1b[] = {2,20,40,70};
	int e2a[] = {-5,2,10,15,50,70,100,200,300,1200,5000};
	int e2b[] = {2,4,5,6,7,10,40,70};	
	int e3a[] = {100,200,300};
	int e3b[] = {1,2,3,4};

	print_doublon(e1a, 4, e1b, 4);
	print_doublon(e2a, 11, e2b, 8);
	print_doublon(e3a, 3, e3b, 4);
}
