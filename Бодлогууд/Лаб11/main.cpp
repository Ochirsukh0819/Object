#include <iostream>
#include <stdlib.h>
#include "list.h"
#include "circle.h"
#include "square.h"
#include "triangle.h"

using namespace std;

int main()
{
  int max = 10, min = 6, i, raduis_rand, circle_rand, j, square_rand, triangle_rand;

  circle_rand = rand() % (max - min + 1) + min;
  twod *shapes[30];

  cout << "\nCircle sanamsargui too:" << circle_rand << endl;
 
  for (i = 0; i < 10; i++)
  {

    raduis_rand = rand() % 30 + 1;
    shapes[i] = new circle(raduis_rand);
  }

  for (i = 10; i < 20; i++)
  {

    square_rand = rand() % 30 + 1;
    shapes[i] = new square(square_rand);
  }

  for (i = 20; i < 30; i++)
  {

    triangle_rand = rand() % 30 + 1;
    shapes[i] = new triangle(triangle_rand);
  }

  // list amjillttai heregjsen
  int ds, t, x, pos, s;
  twod *a1, *a2;
  linked_list<twod *> l;
  for (i = 0; i < 30; i++)
    l.add(shapes[i]);

  cout << "\nEremblegdeegui\n";
  for (i = 0; i < 30; i++)
    cout << l.get(i)->get_s() << endl;

  for (i = 29; i > 0; i--)
  {
    for (j = 0; j < i; j++)
    {

      if (l.get(i)->get_s() < l.get(j)->get_s())
      {

        l.swap(i, j);
      }
    }
  }
  cout << "\nEremblegdsen\n";
  for (i = 0; i < 30; i++)
    cout << l.get(i)->get_s() << endl;
  return 0;
}

template class linked_list<twod *>;