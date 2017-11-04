/*this little program  is  to help me to learn the time() function,and the struct tm
also to practice my new-learned knowledge about deep c pointer; 
 */
#include <stdio.h>
#include <time.h>

int main(){
	time_t mytime;
	struct tm mytm,*mytmptr;
	int i,*intbase;


	(void)time(&mytime);
	printf("\n%ld\n",mytime);

	mytmptr=gmtime(&mytime);

	intbase=(int*)mytmptr;    //this is a type force cast from pointer struct * to int *
        
	puts("\n");
        for(i=0;i<9;i++){
		printf("\t%d",*intbase);
		intbase++;      //so now you've got that a type cast made once is enough !!!
	}



	mytmptr=localtime(&mytime);
        intbase=(int*)mytmptr;   //this is a type force cast from pointer struct * to int *

	puts("\n");
        for(i=0;i<9;i++){
		printf("\t%d",*intbase);
		(int*)intbase++; // compare this line with 23 line ;
	                         //notice the difference : (int*)
	}

		
	return 0;

}
