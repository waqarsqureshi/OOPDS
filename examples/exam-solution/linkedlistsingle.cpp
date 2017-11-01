/* Exam Solution question 02 
 by waqar shahid
 sessional 01

The solution is only the function defination
main() is not part of the solution, if someone
has written it he would not get extra credit


*/

// header files
#include<stdlib.h>
#include<iostream> 
#include<string>

using namespace std;

// struct to carry our surah
typedef struct surah {
    string name_of_surah;
    int position_of_surah;
    surah * n;
    surah (string name, int position) {
    name_of_surah = name; position_of_surah = position;
    n = NULL;
    }
} surah;

// function declaration
void printlist (surah *linkedlist);
void printlist_reverse(surah *linkedlist);
void removeSurah(surah **head_ref, int pos);
void push(surah** head_ref, string name, int pos);

// Program to create a simple linked 
// list with 5 nodes
int main()
{
  surah* head = new surah("Al-Baqarah",2);
  head->n = new surah("Aali-Imran",3);
  head->n->n= new surah("an-Nisa",4);
  head->n->n->n= new surah("Al-Ma'idah",5);
  push(&head,"Al-Fatihah",1);
  cout<<"list of surah"<<endl;
  //printlist(head);
  printlist_reverse(head);
  removeSurah(&head,4);
  cout<<"removing after last surah"<<endl; 
  printlist(head);
  return 0;
}

/*
This is the print function that prints in reverse using 
recursion
*/
void printlist_reverse (surah *linkedlist){
    if(linkedlist->n==NULL){
        cout<<"Position: "<<linkedlist->position_of_surah;
        cout<<" Name: "<<linkedlist->name_of_surah<<endl;
    }
    else{
        printlist_reverse(linkedlist->n);
        cout<<"Position: "<<linkedlist->position_of_surah;
        cout<<" Name: "<<linkedlist->name_of_surah<<endl;        
    }           
}
/*
This is the print function that prints forward without
using recursion
*/
void printlist (surah *linkedlist){
    while(linkedlist!=NULL){
        cout<<"Position: "<<linkedlist->position_of_surah;
        cout<<" Name: "<<linkedlist->name_of_surah<<endl;
        linkedlist = linkedlist->n;        
    }           
}


/* Given a reference (pointer to pointer) to the head of a list
   and an int, inserts a new surah on the front of the list. 
   This is not part of the solution only given as reference
   for future
*/
void push(surah** head_ref, string name,int pos)
{
    surah* new_node = new surah(name,pos);
    new_node->n = (*head_ref);
    (*head_ref)    = new_node;
}

/* Given a reference (pointer to pointer) to the head of a list
   and a position, deletes the surah at the given position
   Assumption:Here the position is not the position of surah 
   but the position in the linked list. 
   */
void removeSurah(surah **head_ref, int pos)
{
   // If linked list is empty
   if (*head_ref == NULL)
      return;

   // Store head node
   surah* temp = *head_ref;

    // If head needs to be removed
    if (pos == 0)
    {
        *head_ref = temp->n;   // Change head
        free(temp);               // free old head
        return;
    }

    // Find previous surah of the surah to be deleted
    for (int i=0; temp!=NULL && i<pos-1; i++)
         temp = temp->n;

    // If position is more than number of surah
    if (temp == NULL || temp->n == NULL)
         return;

    // Node temp->n is the surah to be deleted
    // Store pointer to the next of surah to be deleted
    surah *n = temp->n->n;

    // Unlink the node from linked list
    free(temp->n);  // Free memory

    temp->n = n;  // Unlink the deleted node from list
}


