// C++ program to mirror an n-ary tree 
#include <bits/stdc++.h> 
using namespace std; 
  
// Represents a node of an n-ary tree 
struct Node 
{ 
    int key; 
    vector<Node *>child; 
}; 
  
// Function to convert a tree to its mirror 
void mirrorTree(Node * root) 
{ 
    // Base case: Nothing to do if root is NULL 
    if (root==NULL) 
        return; 
  
    // Number of children of root 
    int n = root->child.size(); 
  
    // If number of child is less than 2 i.e. 
    // 0 or 1 we do not need to do anything 
    if (n < 2) 
        return; 
  
    // Calling mirror function for each child 
    for (int i=0; i<n; i++) 
        mirrorTree(root->child[i]); 
  
    // Reverse vector (variable sized array) of child 
    // pointers 
    reverse(root->child.begin(), root->child.end()); 
} 
  
// Utility function to create a new tree node 
Node *newNode(int key) 
{ 
    Node *temp = new Node; 
    temp->key = key; 
    return temp; 
} 
  
// Prints the n-ary tree level wise 
void printNodeLevelWise(Node * root) 
{ 
    if (root==NULL) 
        return; 
  
    // Create a queue and enqueue root to it 
    queue<Node *>q; 
    q.push(root); 
  
    // Do level order traversal. Two loops are used 
    // to make sure that different levels are printed 
    // in different lines 
    while (!q.empty()) 
    { 
        int n = q.size(); 
        while (n>0) 
        { 
            // Dequeue an item from queue and print it 
            Node * p = q.front(); 
            q.pop(); 
            cout << p->key << " "; 
  
            // Enqueue all childrent of the dequeued item 
            for (int i=0; i<p->child.size(); i++) 
                q.push(p->child[i]); 
            n--; 
        } 
  
        cout << endl; // Separator between levels 
    } 
} 
  
// Driver program 
int main() 
{ 
    /*   Let us create below tree 
    *              10 
    *        /   /    \   \ 
    *        2  34    56   100 
    *                 |   /  | \ 
    *                 1   7  8  9 
    */
    Node *root = newNode(10); 
    (root->child).push_back(newNode(2)); 
    (root->child).push_back(newNode(34)); 
    (root->child).push_back(newNode(56)); 
    (root->child).push_back(newNode(100)); 
    (root->child[2]->child).push_back(newNode(1)); 
    (root->child[3]->child).push_back(newNode(7)); 
    (root->child[3]->child).push_back(newNode(8)); 
    (root->child[3]->child).push_back(newNode(9)); 
  
    cout << "Level order traversal Before Mirroring\n"; 
    printNodeLevelWise(root); 
  
    mirrorTree(root); 
  
    cout << "\nLevel order traversal After Mirroring\n"; 
    printNodeLevelWise(root); 
  
    return 0; 
} 
