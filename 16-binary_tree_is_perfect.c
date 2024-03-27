#include "binary_trees.h"
/**
* binary_tree_is_perfect -  checks if a binary tree is a perfect node
* @tree: root node of the tree to check
* Return: if tree is full or not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}

/**
* binary_tree_height - measures the height of a binary tree node
* @tree: pointer to node root to check
* Return:  measure the height of the node
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (maxDepth(tree) - 1);
}

/**
* maxDepth - measures the height of a binary tree node
* @node: pointer to node
* Return: measure the height of the node.
*/
int maxDepth(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{
	/* compute the depth of each subtree */
		int leftDepth = maxDepth(node->left);
		int rightDepth = maxDepth(node->right);

		/* use the larger one */
		if (leftDepth > rightDepth)
		{
			return (leftDepth + 1);
		}
		else
		{
			return (rightDepth + 1);
		}
	}
}
