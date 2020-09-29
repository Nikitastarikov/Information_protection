#include "LibCryptographic.hpp"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <typeinfo>
#include <cstring>

#define RANGE 1000000000
using namespace std;

void Algorithm_0()
{
	long long i = rand() % RANGE;
	long long j = rand() % RANGE;
	long long k = rand() % RANGE + 1;

	cout << "The algorithm of fast exponentiation modulo:" << endl << endl;
	cout << i << "^" << j << " mod " << k << " = " << modulo_multiplication(i, j, k) << endl;
}

void Algorithm_1()
{
	cout << "The algorithm Evclida:" << endl << endl;

	long long a = rand() % RANGE;
	long long b = rand() % RANGE;

	cout << "a = " << a << " b = " << b << endl << endl; 

	long long U[3] = {a, 1, 0};
	evclid_algorithm(a, b, U);

	if ((a * U[1] + b * U[2]) == U[0])
	{
		//cout << "the answer is correct" << endl;
		cout << "NOD(" << a << ", " << b << ") = " << U[0] << endl;
		cout << "x = " << U[1] << endl;
		cout << "y = " << U[2] << endl;
	} 
	else 
	{
		cout << "the answer is incorrect" << endl;
	}
}

void Algorithm_2()
{
	cout << "The algorithm Diffie-Hellman:" << endl << endl;

	long long p = 0;
	long long q = 0;
	long long g = 0;
	long long Xa = 0;
	long long Xb = 0;
	long long Ya = 0;
	long long Yb = 0;
	long long Za = 0;
	long long Zb = 0;

	do
	{
		q = random_prime_number(1, RANGE);
		p = 2 * q + 1;
	} while (!is_prime(p));
	
	do {
		g = rand() % (p - 1) + 2;
	} while (modulo_multiplication(g, q, p) == 1);

	Xa = rand() % (p - 1) + 1;
	Xb = rand() % (p - 1) + 1;

	Ya = modulo_multiplication(g, Xa, p);
	Yb = modulo_multiplication(g, Xb, p);

	Za = modulo_multiplication(Yb, Xa, p);
	Zb = modulo_multiplication(Ya, Xb, p);
	
	cout << "Data public: " << "\t\t\t" << "| Data private: " << endl;
	cout << "p = " << p << "\t\t\t" << "| Xa = " << Xa << endl;
	cout << "q = " << q << "\t\t\t" << "| Xb = " << Xb << endl;
	cout << "Ya = " << Ya << endl;
	cout << "Yb = " << Yb << endl;
	cout << "g = " << g << endl << endl;

	if (Za == Zb)
	{
		cout << "Za = Zb = " << Za << endl;
	}
	else
	{
		cout << "the answer is incorrect" << endl;
	}
}

void Algorithm_3()
{
	cout << "The algorithm Baby step, giant step" << endl << endl;

	long long m = 0;
	long long k = 0;
	long long p = 0;
	long long x = 0;
	long long res_y = 0;
	long long a = rand() % RANGE;
	long long y = rand() % RANGE;

	do
	{
		p = rand() % RANGE + 1;
	} while (!is_prime(p) || y >= p);
	
	m = (long long)sqrt(p) + 1;
	k = (long long)sqrt(p) + 1;

	cout << a << "^x" << " mod " << p << " = " << y << endl; 
	cout << "m = k = " << m << endl << endl;

	x = baby_step_giant_step(y, a, p, m, k);
	
	if (x == -1)
	{
		cout << "no equal members found" << endl;
	}
	else
	{
		res_y = modulo_multiplication(a, x, p);
		cout << "x = " << x << endl;
		cout << "y = " << res_y << endl;
		if (res_y == y) 
		{
			cout << "good" << endl;
		}
	}
	
}

int main(int argn, char* argv[])
{

	if (argn != 2 || strlen(argv[1]) != 1 || !(('0' <= argv[1][0]) && (argv[1][0] <= '3')))
	{
		cerr << "there must be 2 arguments" << endl;
		cerr << "0 - the algorithm of fast exponentiation modulo" << endl;
		cerr << "1 - the algorithm Evclida" << endl;
		cerr << "2 - the algorithm Diffie-Hellman" << endl;
		cerr << "3 - the algorithm Baby step, giant step" << endl;
		return -1;
	}

	srand(time(nullptr));
	int NomerAlg = atoi(argv[1]);

	switch (NomerAlg)
	{
	case 0:
		Algorithm_0();
		break;
	case 1:
		Algorithm_1();
		break;
	case 2: 
		Algorithm_2();
		break;
	case 3:
		Algorithm_3();
		break;
	}

	return 0;
}