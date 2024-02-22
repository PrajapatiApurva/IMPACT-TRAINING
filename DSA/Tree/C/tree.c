#include<stdio.h>
#include<stdlib.h>

struct Vertex
{
    int data;
    struct Vertex *left;
    struct Vertex *right;
};
typedef struct Vertex Vertex;

Vertex *getVertex(int data){
    Vertex* node=(Vertex*)malloc(sizeof(Vertex));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

Vertex* insertToBST(Vertex* root, int data){
    if(!root){
        return getVertex(data);
    }
    else if(root->data > data){
        root->left = insertToBST(root->left, data);
    }
    else if(root->data < data){
        root->right = insertToBST(root->right, data);
    }
}


int findMin(Vertex* root){
    if(!root){
        printf("No elements Exist in a tree...\n");
        return -1;
    }
    else{
        while(root->left!=NULL){
            root=root->left;
        }
        return root->data;
    }
}

int findMax(Vertex* root){
    if(!root){
        printf("No elements Exist in a tree...\n");
    }
    else{
        while(root->right!=NULL){
            root=root->right;
        }
        return root->data;
    }
}

void inorderTraverse(Vertex* root){
    if(root){
        inorderTraverse(root->left);
        printf("%d ", root->data);
        inorderTraverse(root->right);
    }
}

void preorderTraverse(Vertex* root){
    if(root){
        printf("%d ", root->data);
        preorderTraverse(root->left);
        preorderTraverse(root->right);
    }
}

void postorderTraverse(Vertex* root){
    if(root){
        postorderTraverse(root->right);
        postorderTraverse(root->left);
        printf("%d ", root->data);
    }
}
Vertex* removeElem(Vertex* root,int target){
    if(root == NULL){
        return root;
    }
    if(root->data > target){
        root->left=removeElem(root->left,target);
        return root;
    }
    else if(root->data < target){
        root->right=removeElem(root->right,target);
        return root;
    }

    if(root->left == NULL){
        Vertex* temp=root->right;
        free(root);
        return temp;
    }
    else if(root->right == NULL){
        Vertex* temp=root->left;
        free(root);
        return temp;
    }

    else{
        Vertex* parent=root;
        Vertex* elem=root->right;
        while(elem->left != NULL){
            parent = elem;
            elem = elem->left;
        }

        if(parent != root){
            parent->left = elem->right;
        }
        else{
            parent->right = elem->left;
        }

        root->data = elem->data;
        free(elem);
        return root;
    }
}
void printMenu(){
    printf("\nEnter the Choice:\n1.Insert\n2.Min\n3.Max\n4.Exit\n5.delete\nChoice: ");
}

int getNumber(){
    int num;
    printf("\nEnter the Number You Want to Insert: ");
    scanf("%d",&num);
    return num;
}
int setNumberdel(){
    int num;
    printf("\nEnter the Number You Want to Delete: ");
    scanf("%d",&num);
    return num;
}

void printTree(Vertex* root, int level){
    if(root){
        printTree(root->right, level + 1);
        for (int i = 0; i < level; i++)
        {
            printf("    ");
        }
        printf("%d\n", root->data);
        printTree(root->left, level + 1);
    }
}

int main()
{ 
    Vertex* root = getVertex(getNumber());

    // insertToBST(root, 20);
    // insertToBST(root, 15);
    // insertToBST(root, 30);
    // insertToBST(root, 5);
    // insertToBST(root, 7);
    // insertToBST(root, 0);

    // removeElem(root,10);

    // printTree(root, 0);

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
            printf("\n%d is the minimum element...",findMin(root));
            break;
        case 3:
            printf("\n%d is the minimum element...",findMax(root));
            break;
        case 4:
            flag=0;
        case 5:
            // inorderTraverse(root);
            printTree(root,0);
            removeElem(root,setNumberdel());
            printf("Elem is removed...\n");
            printTree(root,0);
            break;
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
    // inorderTraverse(root);
    // printf("\n");
    // preorderTraverse(root);
    // printf("\n");
    // postorderTraverse(root);
    // printf("\n");



    return 0;
}


