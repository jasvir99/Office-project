#include "header/hall.h"
#include "header/database.h"

Halldetails :: Halldetails()
{
	Database data;
	string query;
    query="select * from name;";
	cout.width(20);
	cout<<left<<"Id"<<"Name"<<endl;
	//cout<<"---    ----------"<<endl;
	data.Select_query(query,2);
}

void Halldetails :: details(string hall)
{
	Database data;
	string query;
	query="select * from details where Hall_Id=" + hall + ";";
	cout.width(20);
	cout<<left<<"Id";
	cout.width(20);
	cout<<left<<"Name";
	cout.width(20);
	cout<<left<<"Location";
	cout.width(20);
	cout<<left<<"Projetor";
	cout.width(20);
	cout<<left<<"Seats";
	cout.width(20);
	cout<<left<<"Inverter";
	cout.width(20);
	cout<<left<<"Board"<<endl;
	data.Select_query(query,7);
}

void Halldetails :: addhall()
{
	Database name_table,details_table;
	string name,location,projector,seats,inverter,board;		
	cout<<"Enter name of hall:";
	getline(cin,name);
	getline(cin,name);
	cout<<"Enter location of hall:";
	getline(cin,location);
	cout<<"Number of seats available:";
	cin>>seats;
	cout<<"Projector is available? (Yes or No):";
	cin>>projector;
	cout<<"Inverter is available? (Yes or No):";
	cin>>inverter;
	cout<<"Board is available? (Yes or No):";
	cin>>board;
	string query,query1;
	query="insert into name(Hall_name) values ('" + name + "');";
	name_table.Insert_query(query);
	query1="insert into details(Hall_Name,Location,Projector,Seats\
	,Inverter,Board) values('" + name + "','" + location + "','" \
	+ projector + "','" + seats + "','" + inverter + "','" + board\
	 + "');";
	details_table.Insert_query(query1);

}

Halldetails :: ~ Halldetails()
{
 //destructor
}

