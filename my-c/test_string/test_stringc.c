#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
	char *yourstr;
	puts("\n");
        char mystr[20]="wangzhenisagoodboy";
	printf("input:->%s",mystr);
	puts("\n");

	mystr[0]='t';
	mystr[1]='y';
	printf("->->%s",mystr);
	puts("\n");

	yourstr="tutu i love you";
	printf("->->%s",yourstr);
	puts("\n");

	printf("substring:%s",yourstr+4);
	puts("\n");

/*	yourstr[0]='w';                     this is wrong!!  because the area that yourstr                                                 points is a readonly ; "tutu i love you" is a string                                            constant, it can'n be changed !!
	printf("->->%s",yourstr);
	puts("\n");
*/	
	return 0;
}
