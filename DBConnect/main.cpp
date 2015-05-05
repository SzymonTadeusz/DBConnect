#include <iostream>
#include <mysql.h>
#include <my_global.h>
#include <Windows.h>
#include "SQLHead.h"



int main(int argc, char **argv)
			//{
			//char szDB[30];
			//MYSQL * myData;
			//
			//strcpy_s(szDB, "Biblioteka");
			//
			//if ((myData = mysql_init((MYSQL*)0)) &&
			//	mysql_real_connect(myData, "localhost", "root", "qaz123", NULL, MYSQL_PORT,
			//	NULL, 0))
			//{
			//	myData->reconnect = 1;
			//	if (mysql_select_db(myData, szDB) < 0)
			//	{
			//		MessageBox(NULL, "Nie mo¿na wybraæ bazy danych!", "B³¹d na serwerze sql", MB_OK | MB_ICONSTOP);
			//		mysql_close(myData);
			//	}
			//}
			//else
			//{
			//	MessageBox(NULL, "Nie mo¿na po³¹czyæ siê z serwerem!", "B³¹d na serwerze sql", MB_OK | MB_ICONSTOP);
			//	mysql_close(myData);
			//}
			//mysql_close(myData);
			//}


///* **************WERSJA DRUGA, wyjaœnienie jak w pliku nag³ówkowym
{
	MySQL Mysql;
	Mysql.ShowTables();
	getchar();
	return 0;
//int main(void)
}
//*/