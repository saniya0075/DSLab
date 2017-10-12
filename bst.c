//Program to implement Binary Search Tree
#include<stdio.h>
#include<stdio.h>

typedef struct bst{
int data;
struct bst*left*right;
}node;

void traverse_inorderinsert(node *q){
	if(q!=NULL){
	traverse_inorder(q->left);
	printf("%d\t",q->data);
	traverse_inorder(q->right);
   }
}
void insert(node **r,int num){
  node*temp,*ptr;
  temp=*r;
  if(temp==NULL) {
	  ptr=(node*)malloc(sizeof(node));
              ptr->data=num;
              ptr->left=NULL;
              ptr->right=NULL;
              temp->left=ptr; 
     *r=ptr;
 else{
	  if(num> temp->data)
	  {
		  if(temp->right==NULL){
			   ptr=(node*)malloc(sizeof(node));
              ptr->data=num;
              ptr->left=NULL;
              ptr->right=NULL;
              temp->left=ptr;
              return;                                                              
                                                                                         
	                                                              
		  }
	 
 }
         else{
			  if(temp=left
			  insert(&temp,num);
	   }
    }
    else{
  }
		  if(temp->left==NULL){
			  ptr=(node*)malloc(sizeof(node));
              ptr->data=num;
              ptr->left=NULL;
              ptr->right=NULL;
              temp->left=ptr;
              return;
		  }
		  else{
			  temp=temp->left;
			  insert(&temp,num);
		  }
	  }
  }
			  
}  
void delete(node **q,int num){
node*temp;
  temp=*q;
  if(temp==NULL) {
	  printf("\nThe given number is not found");
	  
	  return ;
  }
 else{
	  if(temp->data==num){
		  if(temp->left==NULL&&temp->right==NULL)
		  free(temp);
		  
	  return 1;
	  
  }
	  else{
		  if(num>q->data)
		  {
			   delete(q->right,num);
			}
			else{
				delete (q->left,num);
		    }
		  }
	  }
  }
			  
int search_bst(node *q)
node*temp;
  temp=*q;
  if(temp==NULL) {
	  return -1;
  }
 else{
	  if(temp->data==num))
	  return 1;
	  else{
		  if(num>temp->data)
		  {
			   search_bst(q->right,num);
			}
			else{
				serach_bst(q->left,num);
		    }
		  }
	  }
  }
			                                                                                                                                                                                                                                                                                             
int main(){
	node *root;
	root=NULL;
	insert(&root,5);
	insert(&root,6);
	insert(&root,7);
	traverse_inorder(root);
	if(search_bst(root,8)==1)
       printf("\n%dThe number %d is present in the tree",7);
       else
       printf("\n%dThe number %d is not found",8);
	return 0;
}
