#pragma once
#include "svm.h"

static int(*info)(const char *fmt, ...);
static char* readline(FILE *input);
void exit_input_error(int line_num);
void predict(FILE *input, struct svm_model* my_model, FILE *output);