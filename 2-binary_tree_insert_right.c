#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 * Return: NULL or new_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* Check if the parent has a right child */
	if (parent->right != NULL)
	{
		/* Make this child the right child of new_node */
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
