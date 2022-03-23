#include "binary_trees.h"
/**
 *binary_tree_is_perfect - function
 *@tree: v
 *Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size_tree, height_tree, perfect_tree;

	if (!tree)
	{
		return (0);
	}
	size_tree = binary_tree_size(tree);
	height_tree = binary_tree_height(tree);
	perfect_tree = size_tree == (2 << height_tree) - 1;
	return (perfect_tree);
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
		height_left_branche = binary_tree_height(tree->left) + 1;
	}

	if (tree->right)
	{
		height_right_branche = binary_tree_height(tree->right) + 1;
	}

	if (height_left_branche > height_right_branche)
	{
		return (height_left_branche);
	}

	else
	{
		return (height_right_branche);
	}
}

/**
 *binary_tree_size - function
 *@tree: v
 *Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	}
}
