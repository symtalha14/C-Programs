#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *nextPtr;
};

typedef struct Node node;
typedef struct Node* nodePtr;
int insert(nodePtr *head , int val);

int insert(nodePtr *head , int val){
    nodePtr current = *head;
    nodePtr new_node = malloc(sizeof(node));
    new_node->data = val;
    if(new_node!=NULL){
        if((*head)==NULL){
            (*head)=new_node;
            new_node->nextPtr=new_node;
        }else{
            new_node->nextPtr=(*head)->nextPtr;
            (*head)->nextPtr=new_node;
            

        }
        
        /*else{
            nodePtr current = (*head);
            
            while((current->nextPtr)!=(*head)){
                current=current->nextPtr;
            }
            current->nextPtr = new_node;
            new_node->nextPtr = (*head);

        }*/
    }
    
}
int display(nodePtr first){
    nodePtr current = first;
    printf("Circular Linked List\n");
    do{
        printf("%d\n",current->data);
        current=current->nextPtr;
    }while(current!=first);
}
int main(){
    nodePtr l = NULL;
    insert(&l,100);
    insert(&l,200);
    insert(&l,300);
    insert(&l,400);
    insert(&l,500);
    display(l);
}