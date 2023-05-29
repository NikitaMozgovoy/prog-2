#define main_h

int** createDDMatrix(int rows, int columns);
void freeDDMatrix(int rows, int **A);
void fillDDMatrix(int rows, int columns, int **A);
void printDDMatrix(int rows, int columns, int **A);
int* createMatrix(int n);
void fillMatrix(int n, int *A);
void printMatrix(int n,int *A);
void multDDMatrix(int rows, int columns, int k, int **_A1, int **_A2);
void multMatrix(int rows, int columns,  int *_A1, int **_A2);
void multVector(int rows, int columns, int **_A, int *vector);