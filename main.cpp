#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

class matrix {
    private:
    std::vector<std::vector<double>> *Matrix;
    double Det = 0;
    int n, m;
    public:
    matrix(int N, int M, double a=0);
    void mresize(int N, int M);
    void scan();
    void print();
    matrix operator+(matrix Q);
};

matrix::matrix(int N, int M, double a) {
    Matrix = new std::vector<std::vector<double>>;
    (*Matrix).resize(N);
    for (int i=0; i < N; i++) {
        (*Matrix)[i].resize(M);
        for (int j=0; j < M; j++)
            (*Matrix)[i][j] = a;
    }
    n = N; m = M;
    return;
}
void matrix::mresize(int N, int M) {
    (*Matrix).resize(N);
    for (int i=0; i < N; i++)
        (*Matrix)[i].resize(M);
}
void matrix::scan() {
    for (int i=0; i < n; i++)
        for (int j=0; j < m; j++)
            std::cin >> (*Matrix)[i][j];
    return;
}
void matrix::print() {
    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++)
            printf("%2.2f   ", (*Matrix)[i][j]);
        printf("\n");
    }
    return;
}
matrix matrix::operator+(matrix Q) {
    return Q;
}
int main() {
    matrix M(5,4);
    M.scan();
    M.print();
    return 0;
}
