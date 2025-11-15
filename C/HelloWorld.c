// The preprocessor directive
// It is the #include statement below, the first line of the code which basically includes a header file in your source code. It gives you functions and syntax related to input/output functions in C. It also provides the printf() function which can print output to the console screen.
#include <stdio.h>
// The main method
// It is the method which is called when the program is ran. Int means integer and without the main function your C program cannot run. If you try then you will get a runtime error.
int main(){
	printf("Hello World!\n");
	// Return
	// It returns a value when the function exits. If the value is anything other than 0, it means that the code exited with errors.
	return 0;
}
