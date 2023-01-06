#include <iostream>
using namespace std;
#include <string.h>

int j = 0;
int id[10];
class worker
{
private:
  int number;
  char *name;
  char *position;
  float time;
  float director_salary();

public:
  void start();
  void read();
  void print();
  float salary();
  bool addHour();

  // default contructor
  worker()
  {
    name = new char[20];
    position = new char[10];
    number = 0;
    time = 0;
    j++;
  }

  // parameter contructor
  worker(int nu, char *na, char *p, float t)
  {
    name = new char[20];
    position = new char[10];
    number = nu;
    strcpy(name, na);
    strcpy(position, p);
    time = t;
    j++;
  }
  // destructor
  ~worker()
  {
    cout << "\n Ene object " << name << "\n"
         << position << " amjilttai ustgagdlaa.;" << endl;
    delete[] name;
    delete[] position;
  }

  void copy(worker &s)
  {
    if (name != NULL)
      delete[] name;
    name = new char[strlen(s.name) + 1];
    strcpy(name, s.name);
    if (position != NULL)
      delete[] position;
    position = new char[strlen(s.position) + 1];
    strcpy(position, s.name);
    number = s.number;
    time = s.time;
  }

  // getter

  int getNumber()
  {

    return number;
  }

  int getTime()
  {

    return time;
  }

  char *getName()
  {

    return name;
  }
  char *getPosition()
  {

    return position;
  }

  // setter

  void setNumber(int dugaar)
  {

    int i, shalgah = 0;
    for (i = 0; i < j; i++)
    {
      if (id[i] == dugaar)
      {
        cout << "Bvrtgegdsen bna\n";
        shalgah = 1;
        break;
      }
    }
    if (shalgah == 1)
    {
      cout << "\nDugaaraa oruulna uu";
      cin >> dugaar;
      setNumber(dugaar); 
    }
    else
      number = dugaar;
  }

  void setTime(float tsag)
  {

    time = tsag;
  }

  void *setName(char ner[])
  {

    delete name;

    name = new char[strlen(ner) + 1];

    strcpy(name, ner);
  }

  void *setPosition(char tushaal[])  
  {

    delete position;
    position = new char[strlen(tushaal) + 1];
    strcpy(position, tushaal);
  }
};