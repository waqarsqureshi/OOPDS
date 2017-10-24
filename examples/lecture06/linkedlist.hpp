#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class node {
    private:
        int value;
    public:
        node(int d, node *n);
        node *next;
        int getValue();
        void setValue(int data);
};

class IntLinkedList {
    public:
        IntLinkedList();
        IntLinkedList(int n);
        void append (int value);
        void remove (int position);
        void printreverse ();
        private:
        node *head;
        void _printreversehelper(node *head);
        
};


