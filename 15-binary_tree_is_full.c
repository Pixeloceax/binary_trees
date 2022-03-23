#include "binary_trees.h"
/**
 *binary_tree_is_full - function
 *@tree: v
 *Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int node_left_branche, node_right_branche;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	node_left_branche = binary_tree_is_full(tree->left);
	node_right_branche = binary_tree_is_full(tree->right);
	if (node_left_branche == 0 || node_right_branche == 0)
		return (0);

	return (1);
}

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
