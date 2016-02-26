/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j){
	if (*str == NULL)
		return NULL;
	char *sub_word = (char *)malloc(100 * sizeof(char));
	int index,str_ind=0;
	for (index = i; index <= j; index++)
	{
		sub_word[str_ind] = str[index];
		str_ind++;
	}
	sub_word[str_ind] = '\0';
	return sub_word;
    return NULL;
}
