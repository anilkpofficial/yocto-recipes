#include<stdio.h>

int main(){
#ifdef USER_MYMACRO
	printf("Anil:Git:USER_MYMACRO\n");
#else
	printf("Anil:Git:Hello World...\n");
	myfunction();
#endif
	return 0;
}
