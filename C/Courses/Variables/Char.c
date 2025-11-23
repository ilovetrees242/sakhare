/*
	About some terms: 
 	Format specifier: The one which specifies how a variable should be printed.
	   Format of format specifier: %[flags] [width] [.precision][specifier-character]
	      Means of data types:%s = string %d = integer %f = double %c = char %b = boolean 
	Variables: Variables are responsible for creating a reference to a specific value in the memory so that the programmer does not have to hard code everything. They are usually considered sueful as they can be dynamically intialized
	   Format of variables: [data-type] [name] = [value];
	   The value before the = sign is known as the initializer and the value after it is knownn as the declaration. Without declaring anything you cannot use a variable, because obviously it will not have any value even though it is initialized.
 	Stdbool.h: Special header required for the boolean data type
*/
/* About chars:
 * Char is a short form of character which is used to store a character in a variable. It is just a subset of int meaning each char has an int value too. For example char letter = 'A'; will have the value of 'A', but it can be also converted into int which converts its value into 65 (according to ASCII)
*/
#include <stdio.h>
int main(){
	char currency = '$';
	char ad = '@';
	char arrow = '>';

	printf("I just got 100%c!\n", currency);
	printf("Your email address is unknown%cgmail.com\n", ad);
	printf("Look here %c\n", arrow);
}
