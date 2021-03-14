#include <stdio.h>
#include "test.h"
#include <string.h>

int main()
{

	Person me;
	strcpy(me.firstName, "micah");
	strcpy(me.lastName, "wagner");
	me.age = 15;

	// printf("%s\n", me.firstName);
	// printf("%s\n", me.lastName);
	// printf("%d\n", me.age);


	if(checkIfCool(me) == 0){
		printf("Is this person cool?\n");
		printf("ANSWER: no\n");
	} else {
		printf("Is this person cool?\n");
		printf("ANSWER: yes\n");
	}

	return 0;
}