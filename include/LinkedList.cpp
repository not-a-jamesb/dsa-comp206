#include "../src/LinkedList.h"


LinkedList *linkedlist= new LinkedList();

void LinkedList::add(Node *pred, int data)
{

    Node *newNode = new Node();
    if (pred == nullptr)
    {

    }else{
        pred->addtonext(newNode->getNext());
    }
}

void LinkedList::addToHead(int data)
{
    Node *top =linkedlist->HEAD;
    top->addtoinfo(data);

};

void LinkedList::addToTail(int data){
    Node *bottom=linkedlist->TAIL;
};