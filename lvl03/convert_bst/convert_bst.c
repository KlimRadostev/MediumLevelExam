x#include <stdlib.h>
#include <stdio.h>

typedef struct	s_node
{
	int				value;
	struct s_node	*right;
	struct s_node	*left;
}				t_node;
t_node *first = 0;
t_node *last = 0;
/*
t_node	*convert_bst(t_node *bst)
{
	if (!bst)
		return (NULL);
	convert_bst(bst->left);
	
	convert_bst(bst->right);
}
*/

void 	in_order(t_node *bst)
{
	if (!bst)
		return ;
	in_order(bst->left);
	if (!first && !last) { first = last = bst; }
	else{
		bst->left = last;
		last->right = bst;
		last = bst;
	}
	in_order(bst->right);
}

t_node *convert_bst(t_node *bst)
{
	in_order(bst);
	first->left = last;
	last->right = first;
	return (first);
}

t_node	*n(int val)
{
	t_node	*ret = (t_node *)malloc(sizeof(t_node));
	ret->value = val;
	ret->right = ret->left = 0;
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
	y->left = n(3);
	y->right = n(7);
	y->right->left = n(6);
	y->right->right = n(8);
	y->right->left->left = n(5);
	y->right->left->right = n(7);
	y->right->right->right = n(9);

	t_node	*z = n(30);
	z->left = n(15);
	z->right = n(41);
	z->left->left = n(61);
	z->right->left = n(80);
	y = convert_bst(y);
	for(int i = 0; i < 30; ++i, y= y->left)
	{
		if (i % 8 == 0) printf("\n");
		printf("%d ", y->value);
	}
	printf("\n");

	return (0);
}
