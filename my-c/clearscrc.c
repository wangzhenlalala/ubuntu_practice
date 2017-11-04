#include <stdio.h>
#include <stdlib.h>
#include <term.h>
#include <termios.h>
#include <unistd.h>
int main(){
	char *clear=NULL;
	int charss;
        char *cursor;
	char *secquence;
	setupterm(NULL,fileno(stdout),NULL);
	clear=tigetstr("clear");
	cursor=tigetstr("cup");
	secquence=tparm(cursor,0,0);

	 tputs(clear,1,putchar);

	while((charss=getchar())!='q'){
		putp(secquence);
	        tputs(clear,1,putchar);

		fprintf(stdout,"wo shi wangzhen......................");
		sleep(1);
	}
	return 0;

}
