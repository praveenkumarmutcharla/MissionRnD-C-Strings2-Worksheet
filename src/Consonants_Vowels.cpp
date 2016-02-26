/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
int search_vowel(char ch)
{
	int vowel_char_ascii[5] = { 97, 101, 105, 111, 117 }, i;
	for (i = 0; i < 5; i++)
		if (ch == vowel_char_ascii[i])
			return 1;
	return 0;
}

void count_vowels_and_consonants(char *str, int *consonants, int *vowels){
	if (*str==NULL)
	{ 
		*consonants = 0;
		*vowels = 0;
	}
	*consonants = 0;
	*vowels = 0;
	int i;
	char ch;
	//int vw = 0, con = 0;
	if (str == "")
	{
		*consonants = 0;
		*vowels = 0;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			ch = str[i] + 32;
			if (search_vowel(ch))
			{
				*vowels += 1;
				//		vw += 1;
			}
			else
			{
				*consonants += 1;
				//	con += 1;
			}
		}
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (search_vowel(str[i]))
			{
				*vowels += 1;
				//vw += 1;
			}
			else
			{
				*consonants += 1;
				//con += 1;
			}

		}
	}
	//printf("%d\t%d\n", vw, con);
}

