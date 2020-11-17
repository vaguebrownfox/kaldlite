#pragma once

#include "base/kaldi-common.h"
#include "util/common-utils.h"
#include "matrix/kaldi-matrix.h"
#include "ivectorbin/compute-vad.h"
#include<algorithm>
#include<fstream>

using namespace kaldi;
#define SQR(a) (a*a)
extern int no_of_mfcc_feats;
extern int no_of_combined_frames;
extern int combined_frame_shift;
extern double maxVal;
extern double frame_length;
extern double shift_length;
extern bool is_train;

void getStats(float** data, float* &stats);
void computeStatistics(Matrix<BaseFloat> &input_features, float** &feats, int &no_of_rows);
void scaleWriteFeats(const char* featfilename, float** stats,int* labels, int no_of_rows);
Matrix<BaseFloat> applyVADBE(Matrix<BaseFloat> &input_features);
int applyVAD(Matrix<BaseFloat> &input_features,const char* feat_file_name);