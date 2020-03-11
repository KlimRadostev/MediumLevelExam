typedef struct s_node {
	void *content;
	struct s_node *next;
}			t_node;

void *intersection(struct s_node *lst1, struct s_node *lst2)
{
	while (lst1)
	{
		t_node *tmp = lst2;
		while (tmp)
		{
			if (tmp == lst1) return (lst1);
			tmp = tmp->next;
		}
		lst1 = lst1->next;
	}
	return (0);
}


//test
#include <stdio.h>
#include <stdlib.h>
t_node *n(char *content) { t_node *ret = malloc(sizeof(t_node)); ret->content = content; ret->next = 0; return (ret); }

int main(){
	t_node *l1 = n("a");
	l1->next = n("b");
	l1->next->next = n("c");

	t_node *l2 = n("a");
	l2->next = n("b");
	l2->next->next = n("c");

	t_node *l3 = n("a");
	l1->next = n("b");
	l1->next->next = n("c");

	t_node *l4 = n("a");
	l2->next = n("b");
	l2->next->next = l1->next->next;

	t_node *l5 = 0;
	t_node *l6 = 0;

	t_node *r1 = intersection(l1,l2);
	t_node *r2 = intersection(l3,l4);
	t_node *r3 = intersection(l5,l6);

	printf("%s\n", r1 ? r1->content : 0);
	printf("%s\n", r2 ? r2->content : 0);
	printf("%s\n", r3 ? r3->content : 0);
}
