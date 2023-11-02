#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: measure, If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return ((int)(mod_binary_tree_height(tree->left) -
			mod_binary_tree_height(tree->right)));
}

/**
 * mod_binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height, If tree is NULL, your function must return 0
 */
size_t mod_binary_tree_height(const binary_tree_t *tree)
{
	size_t rheight, lheight;

	if (tree == NULL)
	{
		return (0);
	}

	lheight = mod_binary_tree_height(tree->left);
	rheight = mod_binary_tree_height(tree->right);

	if (lheight > rheight)
	{
		return (lheight + 1);
	}

	return (rheight + 1);
}
