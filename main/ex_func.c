#include <stdio.h>
#include <stdlib.h>
#include "str_utils.h"

void example(void) {
	char* src_string = "The strdup function duplicates the string pointed to by the str argument.";
	char* substring_for_search = "function";
	char* substring_for_count = "n";
	char* replacment_string = "option";

	printf("source string: %s:\n", src_string);
	printf("searching string: %s:\n", substring_for_search);
	printf("string for count: %s\n", substring_for_count);
	printf("replacement string: %s\n\n", replacment_string);

	printf("searching for a substring in a string:\n");
	if (my_strstr(src_string, substring_for_search) != -1) printf("string contain the substring\n\n");
	else printf("string doesn`t contain the substring\n\n");
	printf("counting the number of occurrences of a substring:\n");
	num_occ(src_string, substring_for_count);
	printf("\n");
	printf("replacing a substring in a string with another substring:\n");
	str_rep(src_string, substring_for_search, replacment_string);
	system("pause");
	return 0;
}