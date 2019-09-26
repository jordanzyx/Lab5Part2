//
// Created by Jordan on 9/26/2019.
//
#include <stdio.h>
#include "header.h"

double read_value(FILE *infile){
    double val = 0;
    fscanf(infile,"%lf",&val);
    return val;
}
void save_average(double average,FILE *outfile){
    fprintf(outfile,"%.2lf",average);
}
