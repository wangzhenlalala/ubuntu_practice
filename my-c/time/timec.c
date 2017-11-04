#include <stdio.h>
#include<time.h>

int main(){
	time_t mytime;
	struct tm mytm,*mytmp;
	char *chartime;
	(void)time(&mytime);

	chartime=ctime(&mytime);

	printf("\n%s\n",chartime);

	return 0;




}
