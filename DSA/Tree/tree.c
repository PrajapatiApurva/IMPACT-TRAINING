#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
typedef struct Node Node;

Node *getNode(int data){
    Node* node=(Node*)malloc(sizeof(Node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

Node* insertToBST(Node* root, int data){
    if(!root){
        return getNode(data);
    }
    else if(root->data > data){
        root->left = insertToBST(root->left, data);
    }
    else if(root->data < data){
        root->right = insertToBST(root->right, data);
    }
}

void inorderTraverse(Node* root){
    if(root){
        inorderTraverse(root->left);
        printf("%d ", root->data);
        inorderTraverse(root->right);
    }
}

void findMin(Node* root){
    if(!root){
        printf("No elements Exist in a tree...\n");
    }
    else{
        while(root->left!=NULL){
            root=root->left;
        }
        printf("\n%d is the minimum element...",root->data);
    }
}

void findMax(Node* root){
    if(!root){
        printf("No elements Exist in a tree...\n");
    }
    else{
        while(root->right!=NULL){
            root=root->right;
        }
        printf("\n%d is the maximum element...",root->data);
    }
}

void preorderTraverse(Node* root){
    if(root){
        printf("%d ", root->data);
        preorderTraverse(root->left);
        preorderTraverse(root->right);
    }
}

void postorderTraverse(Node* root){
    if(root){
        postorderTraverse(root->right);
        postorderTraverse(root->left);
        printf("%d ", root->data);
    }
}

void printMenu(){
    printf("\nEnter the Choice:\n1.Insert\n2.Min\n3.Max\n4.Exit\nChoice: ");
}

int getNumber(){
    int num;
    printf("\nEnter the Number You Want to Insert: ");
    scanf("%d",&num);
    return num;
}

int main()
{ 
    Node* root = getNode(10);
    int flag=1;
    while(flag){
        int choice;
        printMenu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertToBST(root, getNumber());
            break;
        case 2:
            findMin(root);
            break;
        case 3:
            findMax(root);
            break;
        case 4:
            flag=0;
        default:
            printf("\nEnter the Valid Choice...");
            break;
        }
    }
    // insertToBST(root, 5);
    // insertToBST(root, 0);
    // insertToBST(root,-10);
    // insertToBST(root, 15);
    
    // findMin(root);
    // findMax(root);
    inorderTraverse(root);
    // printf("\n");
    // preorderTraverse(root);
    // printf("\n");
    // postorderTraverse(root);
    // printf("\n");
    return 0;
}
