#include "header.h"
#include "database-details.h"

class Database
{
  public:
        /** MySQL connectivity Variables */
        MYSQL *connect;
        MYSQL_RES *res_set;
        MYSQL_ROW row;


        unsigned int numrows;            /**< Unsigned int variable */

        STRING_VEC vecTemp;
        
        string query;
 
	Database();
	void Select_query(string,int);
 	void Insert_query(string);
};

