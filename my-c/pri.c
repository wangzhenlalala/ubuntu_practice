#include <stdio.h>
#include <stdlib.h>

int main(){
	int loop=0;
	for(;loop<=16;loop+=2){
		printf("%*s%s\n",loop,"","wang");
	}
	return 0;
}
