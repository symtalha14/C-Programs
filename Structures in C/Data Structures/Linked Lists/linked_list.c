#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *nPtr;
};

typedef struct node node;
typedef node* nodePtr;

int insert(nodePtr *fNode , int value);
int delete(nodePtr *fNode , int value);
int display(nodePtr fNode);


int main(){
    nodePtr firstNode = NULL;
    insert(&firstNode , 30);
    insert(&firstNode , 90);
    insert(&firstNode , 80);
    insert(&firstNode , 50);
    delete(&firstNode , 90);
    insert(&firstNode , 60);
    insert(&firstNode , 70);
    display(firstNode);
}

int insert(nodePtr *fNode , int value){
    nodePtr prevNode;
    nodePtr currentNode;
    nodePtr newNode;

    newNode = malloc(sizeof(node));
    if(newNode!=NULL){
        prevNode = NULL;
        currentNode = *fNode;
        newNode->data = value;
        //For sorted insertion into linked list
        while(currentNode!=NULL && value>currentNode->data){
            prevNode = currentNode;
            currentNode=currentNode->nPtr;
        }
        
        //for insertion at beginning of list
        if(prevNode==NULL){
            newNode->nPtr = *fNode;        
            *fNode = newNode;
        }
        else{
            //for insertion between first and previous node
        prevNode->nPtr = newNode;
        newNode->nPtr = currentNode;
        }
    }else{
        puts("No More Memory available");
    }

}

int delete(nodePtr *fNode , int value){
    nodePtr currentNode;
    nodePtr prevNode;
    nodePtr tempNode;

    //deleting first node
    if((*fNode)->data==value){
        tempNode = *fNode;
        *fNode = (*fNode)->nPtr;
        free(tempNode);
        return 0;
    }else{
        prevNode=*fNode;
        currentNode=(*fNode)->nPtr;
        while(currentNode!=NULL && currentNode->data!=value){
            prevNode=currentNode;
            currentNode=currentNode->nPtr;
        }
        if(currentNode!=NULL){
            tempNode=currentNode;
            prevNode->nPtr = currentNode->nPtr;
            free(tempNode);
        }
    }

    return 0;
}

int display(nodePtr fNode){
    puts("Linked List:");
    while(fNode!=NULL){
        printf("%d\n" ,fNode->data);
        fNode=fNode->nPtr;
    }
}