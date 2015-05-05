/*
#pragma hdrstop
#include <winsock.h>
#include "mysql.h"
#include <windows.h>

#ifndef offsetof
#define offsetof(TYPE, MEMBER) ((size_t) & ((TYPE *)0)->MEMBER)
#endif

void MojaFunkcjaKorzystajaca_z_MySql()
{
	//blabla
}
*/



/**
*--------------------------------------------------------------------
*      WERSJA DRUGA, link jak w pliku nag³ówkowym
*--------------------------------------------------------------------
*/


#include "SQLHead.h"
MySQL::MySQL()
{
	connect = mysql_init(NULL);
	if (!connect)
	{
		cout << "MySQL Initialization Failed";
	}

	connect = mysql_real_connect(connect, SERVER, USER, PASSWORD, DATABASE, 0, NULL, 0);

	if (connect)
	{
		cout << "Connection Succeeded\n";
	}

	else
	{
		cout << "Connection Failed\n";
	}
}


void MySQL::ShowTables()
{
	/** Add MySQL Query */
	mysql_query(connect, "SELECT CONCAT_WS(' ',Imie, Nazwisko) From Osoba");

	i = 0;

	res_set = mysql_store_result(connect);

	my_ulonglong numrows = mysql_num_rows(res_set);

	cout << "DB o nazwie: " << DATABASE  << endl;
	cout << "Zapytanie: SELECT Imie+Nazwisko FROM Osoba zwrocilo nastepujace wyniki: " << endl;


	while (((row = mysql_fetch_row(res_set)) != NULL))
	{
		cout << row[i] << endl;
	}
}

MySQL :: ~MySQL()
{
	mysql_close(connect);
}


