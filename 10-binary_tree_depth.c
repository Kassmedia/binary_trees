#include "binary_trees.h"
/**
* binary_tree_depth - measures the depth of a node
* @tree: pointer to node measures the depth
* Return:  measure the depth of the node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int depth;
	binary_tree_t *new;

	if (tree == NULL)
		return (0);

	depth = 0;

	new = tree->parent;
	while (new)
	{
		depth++;
		new = new->parent;
	}
	return (depth);
}
