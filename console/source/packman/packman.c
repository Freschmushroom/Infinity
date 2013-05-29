#include <stdio.h>
#include <dlfcn.h>
#include <string.h>

int exec(char * name, char * args []) {
	typedef int (*main)(char * []);
	
	int str_len = strlen(name) + 12;
	
	char str_buff[str_len];
	
	strcpy (str_buff, "./lib/lib");
	strcpy (str_buff, name);
	strcpy (str_buff, ".so");
	
	void * lib = dlopen(str_buff, RTLD_NOW);
	
	main m = dlsym(lib, "main");
	
	return m(args);
}