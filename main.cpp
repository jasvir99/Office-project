#include "header/hall.h"
#include "header/database.h"
int main()
{
string hall;
Halldetails list;
cout<<"Enter Id to get details:";
cin>>hall;
list.details(hall);
list.addhall();
return 0;
}
