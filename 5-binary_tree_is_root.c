#include "binary_trees.h"
/**
 *binary_tree_is_root - function
 *@node: v
 *Return: int
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		return (!node->parent && node);
	}
	return (0);
}
