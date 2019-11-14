#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node*next;
};

typedef struct node* nodePtr;
nodePtr fNode;
int push(int data);
int delete();
int print();

int push(int data){
    nodePtr new_node = malloc(sizeof(struct node));
    new_node->data = data;
    if(fNode!=NULL){
        new_node->next = fNode;
        fNode = new_node;
    }else{
        new_node->next=NULL;
        fNode = new_node;
    }
}

int delete(){
    nodePtr temp = fNode;
    if(temp){
        fNode = fNode->next;
    temp->next = NULL;
    free(temp);
    }else{
        puts("Empty Stack !");
    }
}

int print(){
    nodePtr current = fNode;
    if(current){
        while(current!=NULL){
        printf("%d\n",current->data);
        current=current->next;
    }
    }else{
        puts("Empty Stack !");
    }
}
int main(){
    nodePtr start = NULL;
    
    delete();
    print();
}