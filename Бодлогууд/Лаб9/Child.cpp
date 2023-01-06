#include "Child.h"

Child::Child() : Person()
{
    this->favoriteToy = new char[strlen("unknown") + 1];
    strcpy(this->favoriteToy, "unknown");
}
Child::Child(char *favoriteToy, char *name, char *ssnum, int age) : Person(name, ssnum, age)
{
    this->favoriteToy = new char[strlen(favoriteToy) + 1];
    strcpy(this->favoriteToy,favoriteToy);
}
char* Child::getFavoriteToy()
{
    return this->favoriteToy;
}
void Child::setFavoriteToy(char *favoriteToy)
{
    delete this->favoriteToy;
    this->favoriteToy = new char[strlen(favoriteToy) + 1];
    strcpy(this->favoriteToy, favoriteToy);
}
Child::~Child()
{
    delete this->favoriteToy;
}