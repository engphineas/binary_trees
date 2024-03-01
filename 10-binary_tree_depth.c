#include "binary_trees.h"

/**
 * binary_tree_depth - function measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to be measured the depth.
 *
 * Return: 0 - If tree is NULL, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
