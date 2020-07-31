#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatfile(char *filename, char *path) {
	FILE * fPtr;
	char ch;
	
	fPtr = fopen(strcat(strcat(path, "/"), filename), "r");

	if(fPtr == NULL)
    {
        //printf("Unable to open file.\n");
        //printf("Please check whether file exists and you have read privilege.\n");
        //exit(EXIT_FAILURE);
    } else {
		//printf("File opened successfully. Reading file contents character by character. \n\n");
		do 
		{
			ch = fgetc(fPtr);
			putchar(ch);
		} while(ch != EOF);
		printf("\n"); 
		fclose(fPtr);
	}
}