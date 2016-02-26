/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int len = 0,i,j=0;
	char *last_word = (char *)malloc(100 * sizeof(char));
	for (len = 0; str[len] != '\0'; len++);
	for (i = len; str[i] != ' '&&i>-1; i--){
		last_word[j] = str[i];
		j = j + 1;
	}
	last_word[j] = '\0';
	return last_word;
}
