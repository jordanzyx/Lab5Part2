#include <stdio.h>
#include "header.h"

int main() {
    FILE *infile = NULL;
    FILE *outfile = NULL;
    double total = 0;
    double count = 0;

    infile = fopen("C:\\Users\\Jordan\\CLionProjects\\Lab5Part2\\data.txt","r");
    outfile = fopen("C:\\Users\\Jordan\\CLionProjects\\Lab5Part2\\output.txt","w");


    while (!feof(infile)){
        total += read_value(infile);
        count++;
    }

    save_average(total / count,outfile);

    fclose(infile);
    fclose(outfile);

    return 0;
}