#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void topView(Node * root) {
        if(root==NULL){
            return;
        }
        
        queue<pair<Node *,int>> q;
        map<int,int> D2N;
        q.push(make_pair(root,0));
        
        
        while(!q.empty()){
            pair<Node *,int> front=q.front();
            q.pop();
            Node *current=front.first;
            int hd=front.second;
            if(D2N.find(hd)==D2N.end()){
                D2N[hd]=current->data;
                
            }
            if(current->left){
                q.push(make_pair(current->left,hd-1));
            }
            if(current->right){
                q.push(make_pair(current->right,hd+1));
            }
        }
        
        for(auto i:D2N){
            cout<<i.second<<" ";
        }
        
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
	myTree.topView(root);
    return 0;
}
