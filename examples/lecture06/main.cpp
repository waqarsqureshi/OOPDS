// main.cpp
#include"linkedlist.hpp"

int main (void){
    char b = 'b';
    IntLinkedList *myList = new IntLinkedList();
    IntLinkedList *myList_2 = new IntLinkedList(b);
    for (int i = 1; i < 11; i ++){
        myList->append (i);
    }
    myList->printreverse ();
    myList_2->printreverse ();
    return 0;
}
