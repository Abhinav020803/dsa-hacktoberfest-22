#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(){};
        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* buildTree(Node* root){
    cout << "Data : " << " ";
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for left of " << data <<" : ";
    root->left = buildTree(root->left);

    cout << "Enter data for rigth of " << data <<" : ";
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraverse(Node* root){
    int i=0;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            cout << temp->data << " ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}



int main(){
    // int arr[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    
    Node* root = NULL;

    root = buildTree(root);

    levelOrderTraverse(root);

    return 0;
}