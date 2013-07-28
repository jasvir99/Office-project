#include "header/header.h"
int main()
{
MYSQL *connect;
connect=mysql_init(NULL);

if (!connect)
{
cout<<"MySQL Initialization failed";
return 1;
}
connect=mysql_real_connect(connect, HOST, USERNAME, PASSWORD , 
DATABASE ,0,NULL,0);
if (connect)
{
cout<<"connection Succeeded"<<endl;
}
else
{
cout<<"connection failed\n";
}
string email,pass,query;
cout<<"Enter Email Id:";
cin>>email;
cout<<"Enter Password:";
cin>>pass; 

query = "insert into user (Email_Id,password) values ('" + email + "','" + pass + "');";

MYSQL_RES *res_set;
//MYSQL_ROW row;
mysql_query (connect,query.c_str());
unsigned int i =0;
res_set = mysql_store_result(connect);
//unsigned int numrows = mysql_num_rows(res_set);
/*cout<<"First Name Last Name"<<endl;
cout<<"---------- ----------"<<endl;
while (((row= mysql_fetch_row(res_set)) !=NULL ))
{ 
cout.width(15);
 cout<<left<<row[i] << row[i+1] <<endl;
}*/
mysql_close (connect);
return 0;
}
