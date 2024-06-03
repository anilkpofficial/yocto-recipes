#include<stdio.h>

int main(){
#ifdef USER_MYMACRO
	printf("Anil:USER_MYMACRO\n");
#else
	printf("Anil:Hello World...\n");
	myfunction();
#endif
	return 0;
}
