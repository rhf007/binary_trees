#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height, If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rheight, lheight;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
	{
		return (lheight + 1);
	}

	return (rheight + 1);
}
