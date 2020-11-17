#pragma once
#include "svm.h"

void print_null(const char *s);
void parse_command_line(int argc, char **argv, char *input_file_name, char *model_file_name);
void read_problem(const char *filename);
double do_cross_validation();
void setDefaultParams();
void set_svm_params(float c, float g,int cv);
double train(const char* input_file_name, const char* model_file_name);
void setQuietMode();