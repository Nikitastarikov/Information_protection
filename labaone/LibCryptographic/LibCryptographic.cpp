#include "LibCryptographic.hpp"
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <map>

long long modulo_multiplication_recurs(long long digit, long long degree, long long mod)
{
	if (digit == 0) 
		return 1;

	long long current_val_series = modulo_multiplication_recurs(digit, degree >> 1, mod);

	if (degree % 2 == 0)
		return (current_val_series * current_val_series) % mod;
		
	return (digit * current_val_series * current_val_series) % mod;
}

long long modulo_multiplication(long long digit, long long degree, long long mod) //i^j mod k
{
	long long check_line = degree;
	long long current_val_series = digit;// хранит текущее значение ряда
	long long result = 1;

	while (check_line != 0)
	{
		if (check_line & 1)
		{
			result = (result * digit) % mod;
		}
	
		digit = (digit * digit) % mod;
		check_line = check_line >> 1;   
	}

	return result;
}

void evclid_algorithm(long long a, long long b, long long U[3])
{

	long long V[3] = {b, 0, 1};
	long long T[3] = {0, 0, 0};
	long long q = 0, size = 3;

	while (V[0] != 0)
	{
		q = U[0] / V[0];
		T[0] = U[0] % V[0];
		T[1] = U[1] - q * V[1];
		T[2] = U[2] - q * V[2];

		for (int i = 0; i < size; i++)
		{
			U[i] = V[i];
			V[i] = T[i];
		}
	}
}

bool is_prime(long long p)
{
	if (p <= 1) return false;
	 
	long long b = (long long) pow(p, 0.5); 

	for(int i = 2; i <= b; i++)
	{
	  if ((p % i) == 0) return false;        
	}     
	 
   return true;    
}

long long random_prime_number(long long lower_limit, long long upper_limit) {
	long long prime_number;

	do {
	    prime_number = (long long) (rand() % (upper_limit - lower_limit) + lower_limit);
	    
	    if (prime_number % 2 == 0) {
	        prime_number += 1;
	    }
	} while (!is_prime(prime_number));
	return prime_number;
}

long long baby_step_giant_step(long long y, long long a, long long p, long long m, long long k)
{
	std::map<long long, long long> Map;
	long long current_val_series = 0;
	long long I = 1;
	long long J = 0;
	long long x = -1;

	for (long long i = 0; i < m; i++) // J
	{
		current_val_series = modulo_multiplication(a, i, p) * y % p;
		Map[current_val_series] = i;
	}

	for(long long i = 1; i <= k; i++) // I
	{
		current_val_series = modulo_multiplication(a, (i * m), p);
		if(Map.count(current_val_series))
		{
			I = i;
			J = Map[current_val_series];
			x = I * m - J;
			break;
		}
	}	

 	return x;
}