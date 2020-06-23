int countSubtreesWithSumXUtil(Node * root , int & result ,int x) // Helper function
{
    if(!root)       return 0;
    
    int l = countSubtreesWithSumXUtil(root -> left , result , x);
    int r = countSubtreesWithSumXUtil(root -> right , result , x);
    
    if(l+r+root -> data == x)
        ++result;
    return l + r + root -> data;
}
int countSubtreesWithSumX(Node* root, int x)
{
	if (!root)
	    return 0;
	int result = 0;
	countSubtreesWithSumXUtil(root , result , x);
	return result;
}
