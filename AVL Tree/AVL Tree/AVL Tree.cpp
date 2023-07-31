#include<iostream>
using namespace std;
class node {
public:
	int data;
	node* left;
	node* right;
	node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};
int height(node* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int count = 0;
	node* temp = root;
	int leftHeight = 0, rightHeight = 0;
	while (temp->left != NULL)
	{
		temp = temp->left;
		leftHeight++;
	}
	cout << "left height of this node is " << leftHeight << " \n";
	temp = root;
	while (root->right != NULL)
	{
		temp = temp->right;
		rightHeight++;
	}
	cout << "right height of this node is " << rightHeight << " \nSo the actual height is..\n" << max(leftHeight, rightHeight)+1 << endl;
	return max(leftHeight, rightHeight)+1;
}
bool isBlanacedHeight(node* root)
{

	if (root == NULL)
	{
		return true;
	}
	if (isBlanacedHeight(root->left) != true)
	{
		return false;
	}
	if (isBlanacedHeight(root->right) != true)
	{
		return false;
	}
	int leftHeight = height(root->left);
	int rightHeight = height(root->right);
	if (abs(leftHeight - rightHeight) <= 1)
	{
		return true;
	}
	else return false;
}
bool isbalanced(node* root, int* height)
{

}
int main()
{
	/*
	*	1
	*  / \ 
	* 2   3
	 / \
    4   5     */
	node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->right = new node(5);
	cout << isBlanacedHeight(root);
}