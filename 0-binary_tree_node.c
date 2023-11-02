#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
	/**
	 * here i dont have to check for a null parent because if
	 * thats the case then the new node is just going to be a
	 * root node in the tree (reminding my future self)
	 */
}
