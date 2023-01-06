#include "circle.h"
#include "square.h"
#include "triangle.h"

int main()
{

   int i;

   twod *shapes[9];
   shapes[0] = new circle(1);
   shapes[1] = new circle(5);
   shapes[2] = new circle(10);
   shapes[3] = new square(5);
   shapes[4] = new square(1);
   shapes[5] = new square(9);
   shapes[6] = new triangle(2);
   shapes[7] = new triangle(3);
   shapes[8] = new triangle(10);

  // static 
   shapes[0]->show_number();
  // cout<<"object number: "<<shapes[0]->getNumber();
 
  cout<<"\nDvrsiin talbainuud\n";
   for (i = 0; i < 9; i++)
      cout << "\n"
           << shapes[i]->get_s();

   twod *tmp;

   int k = 1, j;

   for (k = 0; k < 9; k++)
   {
      for (j = 0; j < 9; j++)
      {

         if (shapes[j]->get_s() > shapes[k]->get_s())
         {
            tmp = shapes[j];
            shapes[j] = shapes[k];
            shapes[k] = tmp;
         }
      }
   }

   // eremblegdsen
   cout << "\n Talbaigaar eremblegdsen";
   for (i = 0; i < 9; i++)
      cout << "\n"
           << shapes[i]->get_s();


    // perimeter

      cout<<"\nDvrsiin hvreenii urtuud\n";
   for (i = 0; i < 9; i++)
      cout << "\n"<< shapes[i]->get_p();
 

   // eremblegdsen 

   for (k = 0; k < 9; k++)
   {
      for (j = 0; j < 9; j++)
      {

         if (shapes[j]->get_p() > shapes[k]->get_p())
         {
            tmp = shapes[j];
            shapes[j] = shapes[k];
            shapes[k] = tmp;
         }
      }
   }

 
   cout << "\n Hvreenii urtaar eremblegdsen";
   for (i = 0; i < 9; i++)
      cout << "\n"
           << shapes[i]->get_p();


   
}