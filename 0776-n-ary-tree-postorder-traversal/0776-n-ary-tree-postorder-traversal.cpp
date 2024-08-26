/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
 void func(vector<int>&postorder, Node*root) {
        if(root==nullptr) return;
        for(auto n:root->children) {
            func(postorder, n) ;
        }
        postorder.push_back(root->val) ;
    }
    vector<int> postorder(Node* root) {
        if(root==nullptr) return {};
        vector<int>postorder;
        func(postorder, root) ;
        return postorder;
        
        
    }
};