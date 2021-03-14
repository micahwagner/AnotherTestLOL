#include <string.h>
#include "test.h"

int stringCompare(char str1[], char str2[]){
    int ctr=0;

    while(str1[ctr]==str2[ctr])
    {
        if(str1[ctr]=='\0'||str2[ctr]=='\0')
            break;
        ctr++;
    }
    if(str1[ctr]=='\0' && str2[ctr]=='\0')
        return 0;
    else
        return -1;
}

int checkIfCool(Person p){
	char coolFirstName[] = "micah";
	char coolLastName[] = "wagner";
	if(stringCompare(p.firstName, coolFirstName) == 0) {
		if(stringCompare(p.lastName, coolLastName) == 0){
			return 1;
		} else {
		return 0;
		} 
	} else {
		return 0;
	} 
}


