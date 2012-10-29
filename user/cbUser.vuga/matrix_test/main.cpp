#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include <iostream>
#include <fstream>
using namespace std;

#include "matrix.h"
#include "tools.h"

int main(void)
{
	CMatrix A(2, 2);
	A = rand(3, 3);
	cout << A << endl;
	cout << A + A << endl;
	cout << A + A - A<< endl;
	cout << A*A << endl;
	cout << (A*A)/2 << endl;
	cout << -A << endl;
	cout << eyes(3) << endl;
	cout << randn(3, 3) << endl;
	
	cout << A(0) << ", " << A(1) << ", " << A(2) << ", " << A(3) << endl;
	cout << trans(A) << endl;
	
	return 0;
}
