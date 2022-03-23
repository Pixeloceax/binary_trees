#include "binary_trees.h"
/**
 *binary_tree_balance - function
 *@tree: v
 *Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}


/**
 *binary_tree_height - function
 *@tree: v
 *Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left_branche = 0;
	size_t height_right_branche = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		height_left_branche = binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		height_right_branche = binary_tree_height(tree->right);
	}

	if (height_left_branche > height_right_branche)
	{
		return (1 + height_left_branche);
	}

	else
	{
		return (1 + height_right_branche);
	}
}
