/*************************************************
*
* Copyright 2016 Boualem Boashash
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* Author:                 Boualem Boashash         (boualem.boashash@gmail.com)
* Maintainer since 2015:  Samir Ouelha  			(samir_ouelha@hotmail.fr)
*
* The following references 2 should be cited whenever this script is used:
* [1] B. Boashash, Samir Ouelha, Designing time-frequency  and time-scale
* features for efficient classification of non stationary signals: a tutorial
* review with performance comparison, Digital Signal Processing, In Press.
* [2] B. Boashash, Samir Ouelha, Efficient Software Matlab Package for the calculation 
* of Time-Frequency Distributions related Time-Scale methods and the extraction of 
* signal characteristics, SoftwareX, In Press.
* In addition, the following 3rd reference is relevant for use of the executable
* [3] B. Boashash (ed.), Time-Frequency Signal Analysis and Processing, 2nd Edition 
* (London: Elsevier / Academic Press, December 2015); ISBN 978-0-12-398499-9. Book website:
* http://booksite.elsevier.com/9780123984999/
*
*
*/

#define DEF_WVD_WIN_LEN 31;   /* default window length for the wvd function */

/* Matrix typedef obsolete in Matlab v5+ */

#ifdef V4_COMPAT
#define MATRIX                Matrix
#define NEED_CONST 
#define MXFULL( A )           ( mxIsFull( A ) )
#define MXCREATEFULL( A,B,C ) ( mxCreateFull( A,B,C ) )
#define MXSTRING( A )         ( mxIsString( A ) )
#else
#define MATRIX                mxArray
#define REAL                  mxREAL
#define COMPLEX               mxCOMPLEX
#define NEED_CONST            const 
#define MXFULL( A )           ( !mxIsSparse( A ) )
#define MXCREATEFULL( A,B,C ) ( mxCreateDoubleMatrix( A,B,C ) )
#define MXSTRING( A )         ( mxIsChar( A ) )
#endif


#ifdef MATLAB_MEX_FILE
#define CALLOC( A, B )        mxCalloc( A, B )
#define FREE( A )             mxFree( A )
#else
#define CALLOC( A, B )        calloc( A, B )
#define FREE( A )             free( A )
#endif


void tfsa_cerr( char *error_txt);
void tfsa_cwarn( char *warn_txt);
double * Win_NT_Err (int nlhs, MATRIX *plhs []);
