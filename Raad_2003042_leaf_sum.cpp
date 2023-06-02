#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

Node *newNode(int data)
{
	Node *temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void leafSum(Node *root, int &sum)
{
	if (!root)
		return;

	if (!root->left && !root->right)
		sum += root->data;

	leafSum(root->left, sum);
	leafSum(root->right, sum);
}

int main()
{

	Node *root = newNode(2);
	root->left = newNode(7);
	root->left->left = newNode(2);
	root->left->right = newNode(6);
	root->left->right->left = newNode(5);
	root->left->right->right = newNode(11);
	root->right = newNode(5);
	root->right->right = newNode(9);
	root->right->right->left = newNode(4);

	int sum = 0;
	leafSum(root, sum);
	cout << sum << endl;
	return 0;
}
