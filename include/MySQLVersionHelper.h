/* Copyright (C) 2013 Webyog Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307, USA

*/


#ifndef _MYSQL_VERSION_
#define _MYSQL_VERSION_

#include "Datatype.h"
#include "Tunnel.h"
#include "wyString.h"
const wyChar *IsNewMySQL(Tunnel	* tunnel, PMYSQL mysql);
wyBool IsAlterOK(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 4
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool  IsMySQL4(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 4.1
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL41(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 4.02
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL402(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 4.03
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL403(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 4.11
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL411(Tunnel * tunnel, PMYSQL mysql);


/// Checks the server version is greater than or equal to 4.12
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL412(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 4.0.18
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL4018(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 4.0.13
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL4013(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 5
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL5(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 5.0.10
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL5010(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 5.0.17
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL5017(Tunnel * tunnel, PMYSQL mysql);

wyBool IsMySQL51(Tunnel * tunnel, PMYSQL mysql);

//MySQL 5.0.38
wyBool IsMySQL5038(Tunnel * tunnel, PMYSQL mysql);

//MySQL 5.0.37
wyBool IsMySQL5037(Tunnel * tunnel, PMYSQL mysql);

//MySQL 5.5.3 
wyBool IsMySQL553(Tunnel * tunnel, PMYSQL mysql);

//MySQL 5.5.10
wyBool IsMySQL5510(Tunnel * tunnel, PMYSQL mysql);
//MySQL 5.5.0
wyBool IsMySQL5500(Tunnel * tunnel, PMYSQL mysql);
//MySQL 5.6.0
wyBool IsMySQL5600(Tunnel * tunnel, PMYSQL mysql);
//MySQL 5.6.3
wyBool IsMySQL563(Tunnel * tunnel, PMYSQL mysql);

//MySQL 5.6.4
wyBool IsMySQL564MariaDB53(Tunnel * tunnel, PMYSQL mysql);

//MySQL 5.5.3 or mariadb 5.5
wyBool IsMySQL553MariaDB55(Tunnel * tunnel, PMYSQL mysql);

//MySQL 5.6.5 
wyBool IsMySQL565MariaDB1001(Tunnel * tunnel, PMYSQL mysql);

void   GetVersionInfoforAutoComplete(MYSQL *mysql, wyString &VersionS);

//MySQL 5.6.5
wyBool IsMySQL565(Tunnel * tunnel, PMYSQL mysql);
//mariadb 5.2 for Virtual/Persistent
wyBool IsMariaDB52(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 10.3.9
/**
for virtual columns Persistent->Stored
*/
wyBool IsMariaDB10309(Tunnel * tunnel, PMYSQL mysql);

//MariaDB 10.5.2 for new privileges
wyBool IsMariaDB100502(Tunnel * tunnel, PMYSQL mysql);

//MariaDB 10.5.0 for new privileges
wyBool IsMariaDB100500(Tunnel * tunnel, PMYSQL mysql);

//MariaDB 10.7.0 for new privileges
wyBool IsMariaDB100700(Tunnel * tunnel, PMYSQL mysql);

//MariaDB 10.10.0 for new privileges
wyBool IsMariaDB101000(Tunnel * tunnel, PMYSQL mysql);

//MySQL 5.7.0 for Virtual/Stored columns
wyBool IsMySQL57(Tunnel * tunnel, PMYSQL mysql);

//MySQL 5.7.6 or above for Alter/Create User query
wyBool IsMySQL576(Tunnel * tunnel, PMYSQL mysql);

//MySQL 5.7.3  EXPLAIN EXTENDED is removed
wyBool IsMySQL573(Tunnel * tunnel, PMYSQL mysql);

//MySQL 5.7.7 for SYS Schema
wyBool IsMySQL577(Tunnel * tunnel, PMYSQL mysql);

wyBool IsMySQL578(Tunnel * tunnel, PMYSQL mysql);

// For virtual column support check
wyBool IsMySQL576Maria52(Tunnel * tunnel, PMYSQL mysql);


//wyBool IsClusterDb(Tunnel * tunnel, PMYSQL mysql);


/// Checks the server version is greater than or equal to mySQL5.0.2

/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL502(Tunnel * tunnel, PMYSQL mysql);

wyBool IsMySQL516(Tunnel * tunnel, PMYSQL mysql);

/// Gets the server version number
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyInt32, version number
*/
wyInt32	GetVersionNo(Tunnel * tunnel, PMYSQL mysql);
wyChar *quote_for_like(const wyChar *name, wyChar *buff);

/// Sets the character set
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@param charset: IN charset info
@returns void
*/
void SetCharacterSet(Tunnel *tunnel, MYSQL * mysql, wyChar * charset);

/// Checks the server version is greater than or equal to 8.0.11
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL80011(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 8.0.23
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMySQL80023(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is greater than or equal to 8.0.0
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
/*For Bug issue 2250*/
wyBool IsMySQL800(PMYSQL mysql);

/// Checks the server version isis MariaDB 10.2.0 or higher
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMariaDB100200(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is MariaDB
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMariaDB(Tunnel * tunnel, PMYSQL mysql);

/// Checks the server version is MariaDB 10.4 or higher
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyBool, wyTrue if it is SUCCESS, else wyFalse
*/
wyBool IsMariaDB104(Tunnel * tunnel, PMYSQL mysql);

/** 
@param version: the version string from select version();
@returns wyBool,  wyTrue if param version contains MariaDB 
**/
wyBool IsServerMariaDb(wyString version);

///get the version from querying the server. 
/// An alternative to relying on mysql_get_server_info which does not behaves 100% for mariadb on azure and aws
/**
@param tunnel: IN tunnel pointer
@param mysql: IN PMYSQL value
@returns wyString resulting from select version();
**/
void GetServerVersion(Tunnel * tunnel, PMYSQL mysql, wyString *pServerVersion);

/// similar then GetVersionNo(Tunnel * tunnel, PMYSQL mysql), but parses the param string instead
/**
@param version: the version string from select version();
@returns wyInt32 with the value of version major, minor and patch
**/
wyInt32 GetVersionNo(wyString version);

//Helper function to obtain default authentication plugin
// Returns the default plugin : 
// if mariadb > 10.14 and system environemnt Old_password is 0 -> sql_native_password, else sql_old_password
// if mysqlserver > 5.7 return the result of system variable default_authentication_plugin
/**
@returns String with defined default plugin
*/
wyBool
GetDefaultAuthenticationPlugin(Tunnel * tunnel, PMYSQL mysql, wyInt32 serververno, wyBool ismariadb, wyString *plugin);

/**
@returns String with defined value of server environment
*/
wyBool
GetSystemEnvironment(Tunnel * tunnel, PMYSQL mysql, wyString *var, wyString *value);
#endif
