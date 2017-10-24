#include "linkedlist.hpp"
using namespace std;

node:: node(int d, node *n){
    value = d;
    next = n;
    }

void node::setValue(int d){
    value=d;
}

int node::getValue(){
    return value;
}
// IntLinkdedList class function
IntLinkedList::IntLinkedList(){
// implementation
    head = NULL;
}

IntLinkedList::IntLinkedList(int n) {
    head = NULL;
    append (n);
}

void IntLinkedList::_printreversehelper (node *tmp){

  while (tmp != NULL)
  {
     cout<<"--"<<tmp->getValue();
     tmp = tmp->next;
  }
  cout<<endl;
}


void IntLinkedList::printreverse(){
    _printreversehelper(head);
}


void IntLinkedList::append (int new_data) {
// implementation...

    /* 1. allocate node and put in the new data
    This new node is going to be the last node, so make next of
    it as NULL*/
    node* new_node = new node (new_data,NULL);
 
    node* last = head;  /* used in step 5*/
 
    /* 4. If the Linked List is empty, then make the new node as head */
    if (head == NULL)
    {
       head = new_node;
       return;
    }
       /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
 
    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}
    
