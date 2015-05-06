/*#ifndef my_mysql_fileH
#define my_mysql_file
//Chodzi naturalnie o te linijki poni¿ej
#include <winsock.h>
#include <mysql.h>
#include <windows.h>

#ifndef offsetof
#define offsetof(TYPE, MEMBER) ((size_t) & ((TYPE *)0)->MEMBER)
#endif
//A¿ dot¹d

void MojaFunkcjaKorzystajaca_z_MySql();
#endif
*/


/**
* ===================================================================
*			WERSJA DRUGA, POBRANA ZE STRONY 
*	https://github.com/mandeepsimak/mysql-with-cpp
*===================================================================
*/

#include <iostream>
#include <mysql.h>
#include <sstream>
using namespace std;

class MySQL
{
protected:
	/** MySQL connectivity Variables */
	MYSQL *connect;
	MYSQL_RES *res_set;
	MYSQL_ROW row;

	unsigned int i;
	string user;
	string password;
	string database;
	string server;

public:
	
	void pobierzWartosciDoLogowania();
	/** MySQL Constructor */
	MySQL();

	/** Function to show tables in database */
	void ShowTables();

	/** MySQL Destructor */
	~MySQL();
};