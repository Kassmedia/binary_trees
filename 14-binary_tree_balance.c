#include "binary_trees.h"
/**
* binary_tree_balance -  measure the balance of a tree node
* @tree: root node of the tree to measure the balance
* Return: num of nodes with a child
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightLeft = 0;
	int heightRight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		heightLeft = binary_tree_height(tree->left) + 1;

	if (tree->right)
		heightRight = binary_tree_height(tree->right) + 1;

	return (heightLeft - heightRight);
}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to node root
* Return:  measure the height.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (maxDepth(tree) - 1);
}

/**
* maxDepth - measures the height of a binary tree
* @node: pointer to node
* Return: measure the height.
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
		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);

		/* use the larger one */
		if (lDepth > rDepth)
		{
			return (lDepth + 1);
		}
		else
		{
			return (rDepth + 1);
		}
	}
}
