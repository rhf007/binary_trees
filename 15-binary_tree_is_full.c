#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1, If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftsub = 0, rightsub = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if ((tree->left == NULL && tree->right == NULL))
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		leftsub = binary_tree_is_full(tree->left);
		rightsub = binary_tree_is_full(tree->right);

		if (leftsub == 0 || rightsub == 0)
		{
			return (0);
		}

		return (1);
	}

	return (0);
}
