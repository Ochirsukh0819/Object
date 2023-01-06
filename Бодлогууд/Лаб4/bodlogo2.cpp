
#include "bodlogo2.h"

// start function todorhoilj bna
void worker::start()
{

  number = 0;            // number  = 0 utga onooj ogj bna
  strcpy(name, " ");     // name " " utga ogj bna
  strcpy(position, " "); // position " " utga ogj bna
  time = 0;              // time 0 utga onooj bna
}

// read function todorhoilj bna
void worker::read()
{

  cout << "\nDugaaraa oruulna uu"; // Dugaaraa oruulna uu hewlej bna
  cin >> number;                   // number garaas awj bna
  setNumber(number);
  cout << "Neree oruulna uu";            // Neree oruulna uu
  cin >> name;                           // name garaas awj bna
  cout << "Alban tushaalaa oruulna uu";  // Alban tushaalaa oruulna uu hewlej bna
  cin >> position;                       // position garaas awj bna
  cout << "Ajillasan tsagaa oruulna uu"; //  Ajillasan tsagaa oruulna uu hewlej bna
  cin >> time;                           // time garaas awj bna
}
// print todorhoilj bna
void worker::print()
{
  cout << "\n"
       << number << "\t" << name << "\t" << position << "\t" << time; // hewlej bna
}

// ajilchnii salary fucntion todorhoilj bna
float worker::salary()
{

  float s = 0;             // s huwisagch zarlaj bna
  float hourSalary = 8000; // int hourSalary zarlaj bna utga 5000 ogj bna

  if (strcmp(position, "director") == 0)       // position director bnu gj shalgaj bna vnn bol 0 ==0 bna
    s = director_salary() + hourSalary * time; // director_salary function duudaj ajilchnii tsaling nemj bna
  else                                         // esreg nohtsol
    s = hourSalary * time;                     // ajilchnii tsaling olj bna

  return s; // tsaling butsaaj bna
}
// Zahirliin tsaing olj bna

float worker::director_salary()
{

  float s = 0;              // int turliin s huwisagch zarkaj bn 0 utga onooj bna
  float hourSalary = 50000; // hourSalary = 50000 utga onooj bna

  return hourSalary * time; // zahirliin tsaling olj bna
}

// nemelt tsagiig olj bna
bool worker::addHour()
{

  float nemelt;                       // nemelt  float turluur zarlaj bna
  cout << "Nemelt tsagaa oruulna uu"; // delgets rvv hewlej bna
  cin >> nemelt;                      // nemelt garaas awj bna

  if (nemelt > 0 && nemelt <= 24)
  {           // nohtsol shalgaj bna
    return 1; // vnn bol 1
  }
  return 0; // hudlaa bol 0 butsaaj bna
}

void insertion_sort(worker *emp, int a[], int n)
{
  worker tmp;

  int i, j, sav, key;
  for (i = 1; i < n; i++)
  {
    key = a[i];
    for (j = i - 1; j >= 0 && a[j] < key; j--)
    {

      sav = a[j + 1];
      a[j + 1] = a[j];
      a[j] = sav;
      tmp.copy(emp[i]);
      emp[i].copy(emp[j]);
      emp[j].copy(tmp);
    }
  }
}

int main()
{

  char _name[10];
  char _position[10];
  int _number;
  float _time;
  worker t;
  int key;
  int n = 3, i, j;
  worker *emp[3];

  for (i = 0; i < 3; i++)
    emp[i] = new worker; // haygan objectoo baiguulah

  int eremb[3];

  for (i = 0; i < n; i++)
  {
    emp[i]->read();
    eremb[i] = emp[i]->salary();
    id[i] = emp[i]->getNumber();
    cout << " Tanii tsalin: " << *(eremb + i);
  }

  worker *tmp;

  for (i = 0; i < n; i++)
  {

    for (j = 0; j < n; j++)
    {

      if (strcmp(emp[i]->getName(), emp[j]->getName()) < 0)
      {

        tmp = emp[i];
        emp[i] = emp[j];
        emp[j] = tmp; 
        cout << "\n"
             << tmp;
        cout << "\n"
             << emp[i];
        cout << "\n"
             << emp[j];
      }
    }
  }

  // shalgah

  for (i = 0; i < 3; i++)
  {
    cout << "\nner :" << emp[i]->getName();
  }

  for (i = 0; i < n; i++)
  {
    emp[i]->read();
  }
}
