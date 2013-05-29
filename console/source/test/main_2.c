#include <stdio.h>
#include <dlfcn.h>

int main(void) {
	typedef double (*test_func)(double a, double b);
	
	double m;
	
	void *myso = dlopen("/home/felix/infinity/lib/libcalc_mean.so", RTLD_NOW);
	
	test_func func = dlsym(myso, "mean");
	
	m = func(5.2, 7.9);
	
	printf("Result of mean(5.2, 7.9) was %3.2f\n", m);
	
	return 0;
}