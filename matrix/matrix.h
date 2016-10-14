#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <stdlib.h>

static const int M = 128;
static const int N = 128;

class Matrix
{
    private:
        int matrix[M][N];
    public:
        Matrix()
        {
            for(int i = 0; i != M; ++i)
                for(int j = 0; j != N; ++j)
                    matrix[i][j] = 0;
        }
        Matrix(int m, int n)
        {
            if(m == M || m <= 0) exit(1);
            if(n == N || n <= 0) exit(1);
            
            for(int i = 0; i != m; ++i)
                for(int j = 0; j != n; ++j)
                    matrix[i][j] = 0;
        }

};

#endif
