cmake_minimum_required(VERSION 3.4.1)

project(kaldlite)

set ( kaldlite_sources
	kaldi/base/io-funcs.cc
        kaldi/base/kaldi-error.cc
        kaldi/base/kaldi-math.cc
        kaldi/base/kaldi-utils.cc
        kaldi/base/timer.cc
        kaldi/feat/feature-functions.cc
        kaldi/feat/feature-mfcc.cc
        kaldi/feat/feature-window.cc
        kaldi/feat/mel-computations.cc
        kaldi/feat/resample.cc
        kaldi/feat/wave-reader.cc
        kaldi/matrix/compressed-matrix.cc
        kaldi/matrix/kaldi-matrix.cc
        kaldi/matrix/kaldi-vector.cc
        kaldi/matrix/matrix-functions.cc
        kaldi/matrix/optimization.cc
        kaldi/matrix/packed-matrix.cc
        kaldi/matrix/qr.cc
        kaldi/matrix/sp-matrix.cc
        kaldi/matrix/sparse-matrix.cc
        kaldi/matrix/srfft.cc
        kaldi/matrix/tp-matrix.cc
        kaldi/transform/cmvn.cc
        kaldi/util/kaldi-holder.cc
        kaldi/util/kaldi-io.cc
        kaldi/util/kaldi-semaphore.cc
        kaldi/util/kaldi-table.cc
        kaldi/util/parse-options.cc
        kaldi/util/simple-io-funcs.cc
        kaldi/util/text-utils.cc
        kaldi/ivector/voice-activity-detection.cc
        kaldi/ivectorbin/compute-vad.cc
        libsvm/svm-predict.c
        libsvm/svm.cpp
        )
        
add_library(kaldlite ${kaldlite_sources})

# Specify directories which the compiler should look for headers
target_include_directories(kaldlite
	PUBLIC include
	PUBLIC include/kaldi
	PUBLIC include/libsvm
	PUBLIC include/openfst
        PUBLIC include)
        
# Compile Flags:
#     Enable -Werror when building debug config
#     Enable -Ofast
target_compile_options(kaldlite
        PRIVATE
        -Wall
        -Wextra-semi
        -Wshadow
        -Wshadow-field
        -Ofast
        )
        


        
        
        
        
        
        
        
        
        
        
        
