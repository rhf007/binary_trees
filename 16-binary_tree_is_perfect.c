#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1, If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		if ((tree->left->left == NULL && tree->left->right == NULL) &&
			(tree->right->left == NULL && tree->right->right == NULL))
		{
			return (1);
		}

		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}
	else if (tree->parent == NULL)
	{
		return (1);
	}

	return (0);
}
