/*================================
 * Name: DeleteFiles.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Delete files in c
 *==============================*/

#include <stdio.h>

int main() {
    int output;
    output = remove("file.txt");

    if(output==0) {
        printf("The value of the output variable is %d\n", output);
        printf("\nThe file has been deleted successfully \n");
    } else {
        printf("The value of output variable is %d\n", output);
        printf("\nNot able to delete the files \n");
    }
    return 0;
}
