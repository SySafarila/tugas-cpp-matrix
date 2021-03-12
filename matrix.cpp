#include <iostream>
using namespace std;

int main()
{
    int a[2][3] = {{2,3,6},{4,7,8}};
	int b[3][2] = {{3,5}, {2,4}, {8,6}};
	int c[2][2];
	int row1 = 2, column1 = 3, row2 = 3, column2 = 2, i, j, k;

    // set c ke 0
    for(i = 0; i < row1; ++i)
        for(j = 0; j < column2; ++j)
        {
            c[i][j]=0;
        }

    // Perhitungan
    for(i = 0; i < row1; ++i)
        for(j = 0; j < column2; ++j)
            for(k = 0; k < column1; ++k)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            
	// Matrix A
	cout << "Matrix A" << endl;
	for(i=0; i<2; i++){
		for(j=0; j<3; j++)
			cout << a[i][j] << "  ";
			cout << endl;
	}
	
	cout << endl;
	
	// Matrix B
	cout << "Matrix B" << endl;
	for(i=0; i<3; i++){
		for(j=0; j<2; j++)
		cout << b[i][j] << "  ";
		cout << endl;
	}

    // Matrix C
    cout << endl << "Matrix C" << endl;
    for(i = 0; i < row1; ++i)
    for(j = 0; j < column2; ++j)
    {
        cout << c[i][j] << "  ";
        if(j == column2-1)
            cout << endl;
    }

    return 0;
}
