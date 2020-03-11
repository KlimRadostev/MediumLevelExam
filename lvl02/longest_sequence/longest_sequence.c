#include <stdio.h>
#include <stdlib.h>

typedef struct	s_node
{
	int				value;
	struct s_node	*left;
	struct s_node	*right;
}				t_node;

int longest_sequence(struct s_node *node)
{
	if (!node)
		return (0);

	int max = 1;
	int tmp = 1;

	tmp = longest_sequence(node->left);
	if (node->left && node->left->value == node->value + 1)
		tmp++;
	if (tmp > max)
		max = tmp;

	tmp = longest_sequence(node->right);
	if (node->right && node->right->value == node->value + 1)
		tmp++;
	if (tmp > max)
		max = tmp;

	return (max);
}

t_node	*n(int val)
{
	t_node	*ret = (t_node *)malloc(sizeof(t_node));
	ret->value = val;
	ret->left = ret->right = 0;
	return (ret);
}

int main()
{
	t_node	*x = n(10);
	x->left = n(5);
	x->left->left = n(6);
	x->left->right = n(9);
	x->left->left->left = n(7);
	x->left->left->right = n(13);

	t_node	*y = n(5);
	y->left = n(6);
	y->right = n(4);
	y->right->left = n(9);
	y->right->right = n(3);
	y->right->left->left = n(3);
	y->right->left->right = n(2);
	y->right->right->right = n(2);

	t_node	*z = n(30);
	z->left = n(15);
	z->right = n(41);
	z->left->left = n(61);
	z->right->left = n(80);


	printf("%d\n", longest_sequence(x));
	printf("%d\n", longest_sequence(y));
	printf("%d\n", longest_sequence(z));
	printf("%d\n", longest_sequence(NULL));

	return (0);
}
