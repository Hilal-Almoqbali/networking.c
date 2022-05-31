#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <readfile.h>
int main()
{
    char* file = readfile("file.txt");printf("%s",file);
}