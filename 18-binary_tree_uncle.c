#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL)
	{
		return (NULL);
	}

	uncle = binary_tree_sibling(node->parent);

	return (uncle);
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: a pointer to the sibling node, If node is NULL or the parent is
 * NULL, return NULL, If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
        if (node == NULL || node->parent == NULL)
        {
                return (NULL);
        }

        if (node->parent->left == node)
        {
                return (node->parent->right);
        }

        return (node->parent->left);
}