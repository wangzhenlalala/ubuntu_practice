#include <stdio.h>


int main(){
	char mystr[6]="wangzhen";
	char yourstr[10]="wang";
	puts("\n");

	printf("%s",mystr);

         puts("\n");

	 if((*(yourstr+6))=='\0')
	 putchar(*(yourstr+6));
	 puts("\\0");
	return 0;
}
