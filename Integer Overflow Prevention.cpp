//Programs that don't check for integer overflows will be more susceptible to exploits. 

//The below function is an example

bool sumFlawed(unsigned int a, unsigned int b) {
	unsigned int sum = a + b;
	return sum <= largest;
}

//Hence, we should use this function, which ensures that the sum is greater than the variable a or b, but smaller than the max value
bool sumSecured(unsigned int a, unsigned int b) {
	unsigned int sun = a + b;
	return sum >= a && sum >= b && aum <= largest;
}

//A similar example would be buffer overflow, which occur when processes store data beyond a given buffer

//This function is prone to buffer overflow:
int vulFunc(char* hugeInput) {
	char test[chunk];
	strcpy(test, hugeInput);
}

//To make it secure, add a bufferSize variable and use strncpy instead of strcpy
int safeFunc(char* userVal) {
	char test[bufferSize];
	strncpy(test, userVal, bufferSize);
}

//You can also use the malloc function to do this
char* safeCpy(char* src) {
	size_t len = strlen(src);
	char* test = (char*) malloc(len + 1);
	if (test != NULL) {
		strncpy(test, src, len);
		//append a terminator of '\0'
		test[len] = '0';

	}
	return dst;

}