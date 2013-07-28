#include "header/database.h"

Database :: Database()
{
    connect = mysql_init(NULL);
	

    if ( !connect )
    {
        cout << "MySQL Initialization Failed";
    }  
   

    connect = mysql_real_connect(connect, SERVER, USER, PASSWORD, 
                                 DATABASE, 0, NULL, 0);
    
    if ( connect == NULL )
    {
        cout << "Connection Failed\n";
    }

}
void Database :: Select_query(string query,int n)
{
	mysql_query (connect,query.c_str());
	unsigned int i =0;
	res_set = mysql_store_result(connect);
        numrows = mysql_num_rows(res_set);
	while (((row= mysql_fetch_row(res_set)) !=NULL ))
   { 
		for(i=0;i<n;i++)
		{	
		 	cout.width(20);
		 	cout<<left<<row[i];
		}
		cout<<endl;
   }

}

void Database :: Insert_query(string query)
{
	mysql_query (connect,query.c_str());
	cout<<"Hall Added Successfully"<<endl;
}
