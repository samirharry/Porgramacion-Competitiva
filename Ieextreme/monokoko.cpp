// C program to demonstrate insert operation in binary search tree
#include <bits/stdc++.h>

using namespace std;

struct node
{
	int key;
	struct node *left, *right;
};

// A utility function to create a new BST node
struct node *newNode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

// A utility function to do inorder traversal of BST
void inorder(struct node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d \n", root->key);
		inorder(root->right);
	}
}

int profund(int key, struct node *root)
{
	if(root == NULL){
		return 0;
	}
	if (key <= root->key)
	{
		return 1 + profund(key, root->left);
	}
	else
	{
		return 1 + profund(key, root->right);
	}
}

/* A utility function to insert a new node with given key in BST */
int prof =1;
struct node *insert(struct node *node, int key)
{
	/* If the tree is empty, return a new node */
	if (node == NULL)
		return newNode(key);

	/* Otherwise, recur down the tree */
	if (key <= node->key)
	{
		node->left = insert(node->left, key);
		prof++;
	}
	else if (key > node->key)
	{
		node->right = insert(node->right, key);
		prof++;
	}

	/* return the (unchanged) node pointer */
	return node;
}

// Driver Program to test above functions
int main()
{
	/* Let us create following BST 
			50 
		/	 \ 
		30	 70 
		/ \ / \ 
	20 40 60 80 */
	int n;
	cin>>n;
	struct node *root = NULL;
	int aux;
	cin >> aux;		
	root = insert(root, aux);
	cout << prof << endl;
	prof =1;
	for (int i = 1; i < n; i++)
	{
		cin >> aux;
		insert(root, aux);
		cout << prof << " ";
		prof =1;
	}
	return 0;
}
