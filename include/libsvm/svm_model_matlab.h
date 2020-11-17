#include "mat.h"
#include "engine.h"
#include "svm.h"
const char *model_to_matlab_structure(mxArray *plhs[], int num_of_feature, struct svm_model *model);
struct svm_model *matlab_matrix_to_model(const mxArray *matlab_struct,Engine* ep, const char **error_message);
