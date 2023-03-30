
#include <iostream>
using namespace std;

string preS, inS;
int first, len;

struct TreeNode {
    char val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(char x, TreeNode *L, TreeNode *R) : val(x), left(L), right(R) {}
};

TreeNode* buildTree(int left, int right) {
    int i, mid=left;
    TreeNode *curr;
    curr = new TreeNode(preS[first++], NULL, NULL);
    if (left < right) {
        for (i=left; i<=right; i++) {
            if (inS[i] == curr->val) {
                mid = i;
                break;
            }
        }
        if (left <= mid - 1) {
            curr->left = buildTree(left, mid-1);
        }
        if (mid+1 <= right) {
            curr->right = buildTree(mid+1, right);
        }
    }
    return curr;
}

void postOrder(TreeNode *p) {
    if (p->left != NULL) postOrder(p->left);
    if (p->right != NULL) postOrder(p->right);
    cout << p->val;
}

int main() {
    while (cin >> preS >> inS) {
        first = 0;
        len = (int)preS.length();
        TreeNode *root;
        root = buildTree(first, len-1);
        postOrder(root);
        cout << endl;
    }
    return 0;
}
