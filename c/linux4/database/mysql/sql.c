#include <stdlib.h>
#include <stdio.h>
#include <mysql.h>

int main(){
	//MYSQL *conn_ptr;
	MYSQL connection;
	int res;
	if( !mysql_init(&connection) ){
		fprintf(stderr,"mysql_init failed \n");
		return EXIT_FAILURE;
	}
	//(connection pointer, ip address, user name, password, database_name, port_number, socket_name, flag);

	if( !mysql_real_connect(&connection, "localhost","wangzhen","wangzhen","family",0,NULL,0) ){
		printf("Connection failed\n");
		fprintf(stderr,"error is %d--%s\n",mysql_errno(&connection), mysql_error(&connection) );
		return EXIT_FAILURE;
	}else{
		printf("Connection success\n");
		
		res = mysql_query(&connection, "INSERT INTO member(name, age) VALUES('xiaohua', 3)");
		if(res){
			printf("something wrong with INSERT : %s", mysql_error(&connection) );
		}else{
			printf("INSERT %lu rows\n", (unsigned long)mysql_affected_rows(&connection) );
		}
	}

	mysql_close(&connection);
	return EXIT_SUCCESS;
}
