#pragma once

long long modulo_multiplication_recurs(long long digit, long long degree,long long mod);
long long modulo_multiplication(long long digit, long long degree, long long mod);
void evclid_algorithm(long long a, long long b, long long U[3]);
bool is_prime(long long p);
long long baby_step_giant_step(long long y, long long a, long long p, long long m, long long k);
long long random_prime_number(long long lower_limit, long long upper_limit);