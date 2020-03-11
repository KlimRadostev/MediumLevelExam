
int is_anagram(char *a, char *b)
{
	char arr[256] = {0};
	while (*a) arr[(int)*a++]++;
	while (*b) arr[(int)*b++]--;
	for(int i = 0; i < 256; ++i)
		if (arr[i])
			return (0);
	return (1);
}

#include <stdio.h>
int main(){
	char *e1a = "abcdef";
	char *e1b = "fabcde";
	char *e2a = ".123?.";
	char *e2b = "?321..";
	char *e3a = "abca";
	char *e3b = "bcab";

	printf("%i\n", is_anagram(e1a, e1b));
	printf("%i\n", is_anagram(e2a, e2b));
	printf("%i\n", is_anagram(e3a, e3b));

}
