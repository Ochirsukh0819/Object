
#include <stdlib.h>
#include <stdio.h>
#ifndef _list_
#define _list_

template <class T>
class linked_list
{
public:
  struct Elm
  {
    T x;
    Elm *next;
  };
  typedef struct Elm Elm;

  Elm *head;
  Elm *tail;
  int len;

public:
  linked_list();
  void add(T x);
  void insert(T x, int idx);
  T get(int index);
  void delete_(int idx);
  void pop_front();
  void pop_back();
  int length();
  void print();
  void swap(int, int);
};
// utgiig ni solih
template <class T>
void linked_list<T>::swap(int i, int j)
{

  Elm *p1 = this->head;
  Elm *p2 = this->head;
  int a;
  for (a = 0; a < i; a++)
  {
    if (p1 != NULL)
      p1 = p1->next;
  }
  for (a = 0; a < j; a++)
  {
    if (p2 != NULL)
      p2 = p2->next;
  }

  T sav;
  sav = p1->x;
  p1->x = p2->x;
  p2->x = sav;
}

template <class T>
linked_list<T>::linked_list()
{
  head = NULL;
  tail = NULL;
  len = 0;
}

template <class T>
void linked_list<T>::add(T x)
{
  Elm *o = new Elm;
  o->x = x;
  o->next = NULL;
  if (this->len == 0)
  {
    this->head = this->tail = o;
    this->len++;
  }
  else
  {
    this->tail->next = o;
    this->tail = o;
    this->len++;
  }
}

template <class T>
void linked_list<T>::insert(T x, int idx)
{
  if (idx >= this->len)
    add(x);

  else
  {
    int i;
    Elm *o = new Elm;
    Elm *p1 = this->head;
    o->x = x;
    o->next = NULL;
    this->len++;
    for (i; i < idx - 1; i++)
      if (p1 != NULL)
        p1 = p1->next;

    o->next = p1->next;
    p1->next = o;
  }
}

template <class T>
T linked_list<T>::get(int idx)
{
  Elm *o = this->head;
  int pos = 0;
  for (o; o != NULL; o = o->next)
  {
    if (pos == idx)
    {
      return o->x;
    }
    else
      pos++;
  }
  return NULL;
}

template <class T>
void linked_list<T>::pop_front()
{
  Elm *o;
  if (this->head == NULL)
    return;
  else
  {
    o = this->head;
    this->head = this->head->next;
    this->len--;
    delete o;
  }
}

template <class T>
void linked_list<T>::pop_back()
{

  Elm *o = this->head;
  for (o; o->next != this->tail;)
    o = o->next;

  if (o == NULL)
  {
    delete this->head;
    this->head = this->tail = NULL;
  }
  else
  {
    o->next = NULL;
    delete this->tail;
    this->tail = o;
    this->len--;
  }
}

template <class T>
void linked_list<T>::delete_(int idx)
{
  if (idx >= this->len || idx < 0 || this->len == 0)
    return;

  else if (idx == 0) pop_front();

  else if (idx == this->len - 1 && this->len != 0) pop_back();

  else
  {
    struct Elm *p1 = this->head;
    struct Elm *p2;

    while (idx > 1)
    {
      if (p1 != NULL)
        p1 = p1->next;
      idx--;
    }
    p2 = p1->next;
    p1->next = p1->next->next;
    delete p2;
    this->len--;
  }
}

template <class T>
int linked_list<T>::length()
{
  return this->len;
}

template <class T>
void linked_list<T>::print()
{
  Elm *o = this->head;

  while (o != NULL)
  {
    cout << o->x << endl;
    o = o->next;
  }
}

#endif