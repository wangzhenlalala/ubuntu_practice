#include <stdio.h>

int main(int argc,char **argv){
	
	puts("\n");
	int a=20;
	int** ap=&a;
	int **app=&ap;

	printf("%x\n",a);
	
	printf("%x\n",ap);
	
	printf("%d\n",*ap);
	puts("\n");
        return 0;

}
