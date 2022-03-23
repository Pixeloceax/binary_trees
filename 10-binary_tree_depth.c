#include "binary_trees.h"
/**
 *binary_tree_depth - function
 *@tree: v
 *Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	int height_node_left = 0, height_node_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent)
	{
		height_node_left = binary_tree_depth(tree->parent) + 1;
	}

	if (tree->parent)
	{
		height_node_right = binary_tree_depth(tree->parent) + 1;
	}

	if (height_node_left > height_node_right)
	{
		return (height_node_left);
	}

	else
	{
		return (height_node_right);
	}
}
