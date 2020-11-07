/*================================
 * Name: FileHandling.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: FileHandling in c
 *==============================*/
 
#include <stdio.h>

int main() {
    FILE *fp1;
    char c;
    fp1 = fopen("file.txt","r");

    if(fp1==NULL) {
        printf("Can't open the file!\n");
    } else {
        printf("File has been opened correctly!\n");
    }

    while (1) {
        c = fgetc(fp1);
        if (c==EOF) //EOF -> End Of File
            break;
        else
            printf("%c", c);
    }
    fclose(fp1);
    return 0;
}
