#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_is_bst- checks if the tree is bst
 *@tree: root of the tree
 *Return: 1 if BST 0 if not
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL && tree->parent == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
	{
		if (binary_tree_is_bst(tree->left) == 0)
			return (0);
		/*if (binary_tree_is_bst(tree->left) == 1)
		  return (1);*/
		if (tree->n >= tree->parent->n)
			return (0);
		else
		{
			temp = tree->parent->left;
			while (1)
			{
				if (temp->parent == NULL)
					break;
				temp = temp->parent;
				if (temp->n < tree->n)
					return (0);
			}
		}
	}
	if (tree->right)
	{
		if (binary_tree_is_bst(tree->right) == 0)
			return (0);
		/*if (binary_tree_is_bst(tree->right) == 1)
		  return (1);*/
		if (tree->n <= tree->parent->n)
			return (0);
		else
		{
			temp = tree->parent->right;
			while (1)
			{
				if (temp->parent == NULL)
					break;
				temp = temp->parent;
				if (temp->n > tree->n)
					return (0);
			}
		}
	}

	return (1);
}
