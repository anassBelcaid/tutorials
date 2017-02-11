# Efficient Band Matrix computation

Resume of the post by [Keith Crowe](http://www.drdobbs.com/efficient-band-matrix-computations/184403264?pgno=1).

>> It often pays to reflect the structure of data in the program that processes it. When the data is an array with many zero elements, the time and space savings can be considerable.

## Introduction

Spare matrices are so comment among numerical methods. As an example,
**Band_linear systems** which are caracterized by coefficient matrix with all non-zero elements located near the main diagonal.

>> An efficient storage, will store the non-zero elements.

Fist we check  a template `BandStorage` class. The private members represent all the information required to represent a band matrix.
Header file is stored on [bandstor](~/bandstor.h).
