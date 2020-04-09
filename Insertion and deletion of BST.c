#include<stdio.h> 
#include<stdlib.h> 
struct node 
{ 
int re; 
struct node *left, *right; 
}; 
struct node *newNode(int item) 
{ 
struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
temp->re = item; 
temp->left = temp->right = NULL; 
return temp; 
} 
void inorder(struct node *root) 
{ 
if (root != NULL) 
{ 
inorder(root->left); 
printf("%d \n", root->re); 
inorder(root->right); 
} 
} 
struct node* insert(struct node* node, int re) 
{ 
if (node == NULL) return newNode(re); 
if (re < node->re) 
node->left  = insert(node->left, re); 
else if (re > node->re) 
        node->right = insert(node->right, re);    
return node; 
}
struct node * minValueNode(struct node* node) 
{ 
struct node* current = node; 
while (current && current->left != NULL) 
current = current->left; 
return current; 
} 
struct node* deleteNode(struct node* root, int re) 
{ 
if (root == NULL) return root; 
if (re < root->re) 
root->left = deleteNode(root->left, re); 
else if (re > root->re) 
root->right = deleteNode(root->right, re); 
else
{ 
if (root->left == NULL) 
{ 
struct node *temp = root->right; 
free(root); 
return temp; 
} 
else if (root->right == NULL) 
{ 
struct node *temp = root->left; 
free(root); 
return temp; 
} 
struct node* temp = minValueNode(root->right); 
root->re = temp->re; 
root->right = deleteNode(root->right, temp->re); 
} 
return root; 
} 
int main() 
{ 
struct node *root = NULL; 
root = insert(root,50); 
       insert(root,130); 
       insert(root,123); 
       insert(root,145);  
       insert(root,170);  
       insert(root,160);  
       insert(root,82); 
printf("INORDER TRAVE OF THE BST \n"); 
inorder(root); 
printf("\nDELETE 123\n"); 
root = deleteNode(root, 123); 
printf("INORDER TRAVE OF THE CHANGED BST \n"); 
inorder(root); 
printf("\nDELETE 145\n"); 
root = deleteNode(root, 145); 
printf("INORDER TRAVE OF THE CHANGED BST \n"); 
inorder(root); 
printf("\nDELETE 160\n"); 
root = deleteNode(root, 160); 
printf("INORDER TRAVE OF THE CHANGED BST \n"); 
inorder(root); 
return 0; 
} 
