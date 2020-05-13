#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *nPtr;
    struct node *pPtr;
};

typedef struct node node;
typedef node *nodePtr;

int insert(nodePtr *fNode, int value);
int delete (nodePtr *fNode, int value);
int display(nodePtr fNode);

int main()
{
    nodePtr firstNode = NULL;
    insert(&firstNode, 30);
    insert(&firstNode, 90);
    insert(&firstNode, 80);
    insert(&firstNode, 50);
    delete (&firstNode, 90);
    insert(&firstNode, 60);
    insert(&firstNode, 70);
    display(firstNode);
}

int insert(nodePtr *fNode, int value)
{
    nodePtr currentNode;
    nodePtr newNode;

    newNode = malloc(sizeof(node));
    if (newNode != NULL)
    {
        currentNode = *fNode;
        newNode->data = value;
        if (currentNode != NULL)
        {
            while (currentNode->nPtr != NULL)
            {
                currentNode = currentNode->nPtr;
            }
            currentNode->nPtr = newNode;
            newNode->nPtr = NULL;
            newNode->pPtr = currentNode;
            currentNode->nPtr = newNode;
        }
        else
        {
            newNode->pPtr = NULL;
            newNode->nPtr = NULL;
            *fNode =newNode;
        }
    }
    else
    {
        puts("No More Memory available");
    }
}
    int delete (nodePtr * fNode, int value)
    {
        nodePtr currentNode;
        nodePtr prevNode;
        nodePtr tempNode;

        //deleting first node
        if ((*fNode)->data == value)
        {
            tempNode = *fNode;
            (*fNode)->nPtr->pPtr = (*fNode)->pPtr;
            *fNode = (*fNode)->nPtr;
            free(tempNode);
            return 0;
        }
        else
        {
            currentNode = (*fNode)->nPtr;
            while (currentNode != NULL && currentNode->data != value)
            {
                currentNode = currentNode->nPtr;
            }
            if (currentNode != NULL)
            {
                tempNode = currentNode;
                currentNode->nPtr->pPtr = currentNode->pPtr;
                currentNode->pPtr->nPtr = currentNode->nPtr;
                free(tempNode);
            }
        }
        return 0;
    }

    int display(nodePtr fNode)
    {
        puts("Double Linked List:");
        while (fNode != NULL)
        {
            printf("%d\n", fNode->data);
            fNode = fNode->nPtr;
        }
    }