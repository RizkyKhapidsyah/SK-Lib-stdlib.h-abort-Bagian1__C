#pragma warning(disable:4996)

#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* pFile;
    pFile = fopen("myfile.txt", "r");

    if (pFile == NULL) {
        fputs("Error saat membuka file.\n", stderr);
        abort();
    }

    /* proses reguler di sini */

    fclose(pFile);

    _getch();
    return 0;
}