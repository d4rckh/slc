#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatfile(char *filename, char *path) {
	FILE * fPtr;
	char ch;
	
	fPtr = fopen(strcat(strcat(path, "/"), filename), "r");

	if(fPtr == NULL) {
        //exit(EXIT_FAILURE);
    } else {
		do {
			ch = fgetc(fPtr);
			putchar(ch);
		} while(ch != EOF);
		printf("\n"); 
		fclose(fPtr);
	}
}