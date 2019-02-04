#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *fp = fopen("Test.csv","r");
    char line[1024];

    while (fgets(line, 1024, fp)){
        printf(line);
    }
}