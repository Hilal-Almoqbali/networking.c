#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
char* readfile(char* file);

int main()
{
    char*file = readfile("file.txt");
    printf("%s",file);
}

char* readfile(char* file)
{



    FILE *f1 = fopen("file.txt", "r");printf("%s","1");
    int i;printf("%s","1");
    fseek(f1, 0, SEEK_END); printf("%s","2");
    int inputsize = ftell(f1); printf("%s","3");//its about text's size
    char *input1[inputsize];printf("%s","4");
    for(i = 0; i < inputsize; i++)
    {
          fscanf(f1, "%c", &input1[i]);printf("%c",i);
    }
    printf("%s", *input1);printf("%s","1");
    return *input1;

}