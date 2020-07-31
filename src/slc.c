#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include "functions/findsize.h"
#include "functions/concatfile.h"

int main(int argc, char *argv[]) {
	printf("(%s)\n", argv[0]);
	
	int concat = 0;
	char *path;

	if (argc > 1) {
		path = argv[1];
	} else {
		printf("you must choose a directory to list out, for example \".\" for cwd");
		return -1;
	}

	int i;
    for(i=0; i<argc; ++i) {  
		if (strcmp(argv[i], "--cat") == 0) {
			concat = 1;
		}
    }

	struct dirent **namelist;
	int n;

	n = scandir(path, &namelist, 0, alphasort);
	if (n < 0) perror("scandir");
	else {
    	while (n--) {
			char *dname = namelist[n]->d_name; 
			long int res = findSize(dname);
			printf("[%ld bytes] ", res);
			printf("%s\n", namelist[n]->d_name);
			if (concat == 1) {
				concatfile(dname, path);
			}
			free(namelist[n]);
       	}
       free(namelist);
   }
}