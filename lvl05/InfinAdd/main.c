#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str) { int i = 0; while (str[i++]){} return (i); }
int max(int a, int b) { return (a > b ? a : b); }

#include <stdio.h>

int main(int ac, char **argv)
{
	int		len1 = ft_strlen(argv[1]);
	int		len2 = ft_strlen(argv[2]);
	int		len = max(len1, len2);
	char	*str = (char *)malloc(sizeof(char) * len + 1);
	str[len] = '\0';

	for (int i = len - 1; i >=0 ; i--, len1--, len2--)
	{
		str[i] = argv[1][len1 - 1] + argv[2][len2 - 1];
	}
	printf("%c\n", str[0]);
	printf("%c\n", str[1]);
	printf("%c\n", str[2]);
	printf("%c\n", str[3]);
	printf("%c\n", str[4]);
	printf("%c\n", str[5]);
	return (0);
}
