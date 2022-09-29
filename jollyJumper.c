#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>



int isJollyJumber(const int seq[], int size) 
{
    bool diffs_found[size - 1]; //Bool array to check if lengths up to size-1 has been found

    for(int i = 1 ; i < size ; i++)
    {
        int diff;

        diff = abs(seq[i] - seq[i - 1]);
        diffs_found[diff] = true;
    } //loop finds all the differences and sets value to true in diffs_found if its found

    for(int i = 1 ; i < size ; i++)
    {
        if(diffs_found[i] != true)
        {
            printf("Sequence is not Jolly");
            return 0;
        }   
    } //This section checks if all differences up to size-1 has been found, if not the loop ends prematurely, if true the line below is printed
    printf("Sequence is Jolly");
}
