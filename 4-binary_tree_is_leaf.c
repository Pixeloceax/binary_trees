#include "binary_trees.h"
/**
 *binary_tree_is_leaf - function
 *@node: v
 *Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		return (node && !node->right && !node->left);
	}
	return (0);
}
