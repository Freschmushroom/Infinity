#include <stdio.h>
#include "packman.h"


int main(void) {
	
	extern int exec(char *, char * []);
	
	char * null_ [] = {"", ""};
	
	exec("hello_world", null_);
}