#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
int main () {
	FILE *file;
	char str[100];
	size_t  len = 0;
    ssize_t read;
	int contains = 0;
	int letter;
    if((file = fopen("PE-Import.txt", "r+")) != NULL) {
		while(fscanf(file,"%s", str) == 1) { 
			if(strstr(str, "I want to learn PE file format!")!= 0) {
				contains = 1;
				break;
			}
		}
        if(contains == 1) {
			while ((letter = getc(file)) != EOF)
					putchar(letter);
		}
		else 
			fprintf(file,"I want to learn PE file format!");
    }
	else
		fprintf(file,"I want to learn PE file format!");
	fclose(file);
	return(0);
}	
