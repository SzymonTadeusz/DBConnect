#ifndef my_mysql_fileH
#define my_mysql_file
//Chodzi naturalnie o te linijki poni�ej
#include <winsock.h>
#include "mysql.h"
#include <windows.h>

#ifndef offsetof
#define offsetof(TYPE, MEMBER) ((size_t) & ((TYPE *)0)->MEMBER)
#endif
//A� dot�d

void MojaFunkcjaKorzystajaca_z_MySql();
#endif