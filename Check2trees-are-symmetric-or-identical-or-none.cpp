#include<bits/stdc++.h>
using namespace std;


struct node{

  char data;
  struct node* left = NULL;
  struct node* right = NULL;

};


struct node* create_tree()
{

   struct node* p = new node();
   char ch;

   cout << "Enter the character : \n";
   cin >> ch;

   if(ch =='0')
    return 0;

    p->data = ch;

    cout << "Enter the left child of char " << ch << ": \n";
    p->left = create_tree();

    cout << "Enter the right child of char " << ch << ": \n";
    p->right=create_tree();

    return p;
}


bool mirror(struct node* root_a, struct node* root_b)
{

if(root_a==NULL && root_b==NULL)return true;

if(root_a==NULL || root_b==NULL)return false;

return(root_a-> data == root_b-> data && mirror(root_a->left, root_b->right) && mirror(root_a->right, root_b->left));

}

bool identical(struct node* root_a, struct node* root_b)
{

if(root_a==NULL && root_b==NULL)return true;

if(root_a==NULL || root_b==NULL)return false;

return(root_a-> data == root_b-> data && identical(root_a-> left, root_b-> left) && identical(root_a-> right, root_b-> right));

}

int main()
{
	cout << "Enter the data for the first tree (enter 0 if it doesnt have a child):\n";
	struct node * tree1 = new node();
	tree1 = create_tree();

	cout << "\n\nEnter the data for the second tree :\n\n";
	struct node * tree2 = new node();
	tree2 = create_tree();

    if(identical(tree1 , tree2))
    cout << "\nThe two trees are identical.\n";
    else cout<<"\nThe two trees are not identical.\n";

   if (mirror(tree1 , tree2))
    cout << "\nThe two trees are mirror of each other.\n";

    else
    cout << "\nThe two trees not mirror.\n";

	return 0;
}
