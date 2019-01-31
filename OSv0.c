#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char buf[1024];
    FILE *read = fopen("filename","r");
  
   while (fgets(buf, 1024, read){
       char* tmp = strdup(line);
       printf("Field 3 would be %s\n", getfield(tmp, 3));
       free(tmp);
    }
}