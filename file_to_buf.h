#ifndef FILE_TO_BUF_H
#define FILE_TO_BUF_H
#include <stdio.h>
#include "build/create_c_fileConfig.h" 

void copyFileToBuf(buffer * buff, FILE * source_fp);

#endif
