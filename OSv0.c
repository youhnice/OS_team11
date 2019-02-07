//@@ -1,40 +0,0 @@
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 29d970f2382fa93b026d5f304abd1d0358068017
int main() {
	// open file pointer
	FILE *fp = fopen("Test.csv", "r");
	char line[1024];

	// read the file content
	// add, 100, 101, 102, 103, 104, 105, 106 ---> token will be add then 100 then 101 ...
	// add, 200, 201, 202, 203
	// read, 106
	// delete, 200
	// we need to use string tokenizer to read comma-separated text
	while (fgets(line, 1024, fp)) {
		printf(line);
<<<<<<< HEAD

=======
		
>>>>>>> 29d970f2382fa93b026d5f304abd1d0358068017
		char separator[2] = ",";
		char * token;

		// get the first token
		// token will be add
		token = strtok(line, separator); // s will be 100, 101, 102, ... 

		// walk through other tokens
<<<<<<< HEAD
		while (token != NULL)
		{
			printf("%s \n", token);

			// this is to read next token, token will be 100 and s will be 101, 102, ...
			// btw, file identifiers : 100, 200, 300 etc
			// file contents : 101, 102, 201, 202 .. etc
			token = strtok(NULL, separator);
		}
	}

	fclose(fp);

=======
		while(token != NULL)
		{
			printf("%s \n", token);

			// this is to read next token, token will be 100 and s will be 101, 102, ...
			// btw, file identifiers : 100, 200, 300 etc
			// file contents : 101, 102, 201, 202 .. etc
			token = strtok(NULL, separator);
		}
	}

	fclose(fp);

=======
int main(){
    char buf[1024];
    FILE *read = fopen("filename","r");
  
   while (fgets(buf, 1024, read){
       char* tmp = strdup(line);
       printf("Field 3 would be %s\n", getfield(tmp, 3));
       free(tmp);
    }
>>>>>>> parent of bf6d719... Reader Done
>>>>>>> 29d970f2382fa93b026d5f304abd1d0358068017
}