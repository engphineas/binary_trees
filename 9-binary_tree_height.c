#include "binary_trees.h"

/**
 * binary_tree_height - function measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to be measured the height.
 *
 * Return: 0 - If tree is NULL, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_side = 0, right_side = 0;

		left_side = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_side = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_side > right_side) ? left_side : right_side);
	}
	return (0);
}
