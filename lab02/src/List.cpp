#include "List.h"
#include <iostream>

using namespace std;


void init(slist * list)
{
  list->head = NULL;
}

void push_back(slist * list, char c)
{
  slistEl * p, * e;

  e = new slistEl;  
  e->next = NULL;   
  e->data = c;
  p = list->head;
  if( p )
  {
     while( p->next ) p = p->next;
     p->next = e;
  }
  else list->head = e;
}

slistEl * find(slist * list, char c)
{
  slistEl * p = list->head;
  while(p != NULL)
  {
  	if( p->data == c )
  	  break;
  	p = p->next;
  }
  
  return p;
}

void pop_front(slist * list)
{
  if (list->head)
  {
    slistEl* tmp = list->head->next;
    delete list->head;
    list->head=tmp;
  }
  else 
    cout << "Lista jest pusta!" << endl;
}

void printl(slist * list)
{
  cout << "Moja lista: <";
  slistEl* listptr = list->head;
  
  while(listptr)
  {
    cout << listptr->data;
    listptr = listptr->next;
  }
  cout << ">" << endl;
}