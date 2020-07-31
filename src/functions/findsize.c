#include <stdio.h>
#include <stddef.h>

long int findSize(char file_name[]) { 
    FILE* fp = fopen(file_name, "r"); 
  
    if (fp == NULL) { 
        // TODO: show proper error
        return -1; 
    } 
    fseek(fp, 0L, SEEK_END); 
    long int res = ftell(fp); 
    fclose(fp); 
    return res; 
}