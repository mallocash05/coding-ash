#include<bits/stdc++.h>
using namespace std;

struct Tree
{
	int val;
	Tree * left ,*right;
	Tree(int x):val(x),left(NULL),right(NULL){}
};


int HeightBT(Tree * root)
{
	if(root == NULL)
		return 0;

	int l = HeightBT(root->left);
	int r = HeightBT(root->right);
	return max(l,r)+1;
}



int main()
{
	Tree *root = new Tree(2);
	root->left = new Tree(4);
	root->right = new Tree(5);
	int hieght = HeightBT(root);
	cout<<hieght<<endl;
	return 0;

}