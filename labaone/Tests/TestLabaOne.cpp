#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../LibCryptographic/LibCryptographic.hpp"

TEST_CASE("modulo_multiplication", "[single-file]")
{
	long long CheckMas[4] = {16, 13, 8, 0};
	long long CheckMas1[4] = {34, 7, 5, 4};
	long long CheckMas2[4] = {130, 21, 11, 9};
	long long CheckMas3[4] = {54, 43, 15, 9};
	long long CheckMas4[4] = {21, 17, 6, 3};
	long long CheckMas5[4] = {92, 37, 9, 2};
	long long CheckMas6[4] = {46, 19, 6, 4};
	long long CheckMas7[4] = {214234, 4546, 453, 49};
	long long CheckMas8[4] = {714531, 1586, 1023, 444};
	long long CheckMas9[4] = {71453100, 986845358, 1023, 834};
	long long CheckMas10[4] = {932334124, 991233122, 912321312, 220180864};

	REQUIRE(CheckMas[3] == modulo_multiplication(CheckMas[0], CheckMas[1], CheckMas[2]));
	REQUIRE(CheckMas1[3] == modulo_multiplication(CheckMas1[0], CheckMas1[1], CheckMas1[2]));
	REQUIRE(CheckMas2[3] == modulo_multiplication(CheckMas2[0], CheckMas2[1], CheckMas2[2]));
	REQUIRE(CheckMas3[3] == modulo_multiplication(CheckMas3[0], CheckMas3[1], CheckMas3[2]));
	REQUIRE(CheckMas4[3] == modulo_multiplication(CheckMas4[0], CheckMas4[1], CheckMas4[2]));
	REQUIRE(CheckMas5[3] == modulo_multiplication(CheckMas5[0], CheckMas5[1], CheckMas5[2]));
	REQUIRE(CheckMas6[3] == modulo_multiplication(CheckMas6[0], CheckMas6[1], CheckMas6[2]));
	REQUIRE(CheckMas7[3] == modulo_multiplication(CheckMas7[0], CheckMas7[1], CheckMas7[2]));
	REQUIRE(CheckMas8[3] == modulo_multiplication(CheckMas8[0], CheckMas8[1], CheckMas8[2]));
	REQUIRE(CheckMas9[3] == modulo_multiplication(CheckMas9[0], CheckMas9[1], CheckMas9[2]));
	REQUIRE(CheckMas10[3] == modulo_multiplication(CheckMas10[0], CheckMas10[1], CheckMas10[2]));
}

TEST_CASE("the_algorithm_Evclida", "[single-file]")
{

	long long i = 37, j = 45;
	long long U[3] = {i, 1, 0};
	evclid_algorithm(i, j, U);
	REQUIRE((i * U[1] + j * U[2]) == U[0]);

	i = 154, j = 123;
	U[0] = i;
	U[1] = 1;
	U[2] = 0;
	evclid_algorithm(i, j, U);
	REQUIRE((i * U[1] + j * U[2]) == U[0]);

	i = 32347, j = 123123;
	U[0] = i;
	U[1] = 1;
	U[2] = 0;
	evclid_algorithm(i, j, U);
	REQUIRE((i * U[1] + j * U[2]) == U[0]);

	i = 23230, j = 123145;
	U[0] = i;
	U[1] = 1;
	U[2] = 0;
	evclid_algorithm(i, j, U);
	REQUIRE((i * U[1] + j * U[2]) == U[0]);

	i = 32431, j = 435123;
	U[0] = i;
	U[1] = 1;
	U[2] = 0;
	evclid_algorithm(i, j, U);
	REQUIRE((i * U[1] + j * U[2]) == U[0]);

	i = 3243532, j = 1325324523;
	U[0] = i;
	U[1] = 1;
	U[2] = 0;
	evclid_algorithm(i, j, U);
	REQUIRE((i * U[1] + j * U[2]) == U[0]);

	i = 3242353254, j = 1325324523;
	U[0] = i;
	U[1] = 1;
	U[2] = 0;
	evclid_algorithm(i, j, U);
	REQUIRE((i * U[1] + j * U[2]) == U[0]);
}

TEST_CASE("the_algorithm_Diffie_Hellman", "[single-file]")
{
	long long p = 541;
	long long q = 0;
	long long g = 10;
	long long Xa = 4;
	long long Xb = 5;
	long long Za = 0;
	long long Zb = 0;
	long long Ya = 0;
	long long Yb = 0;

	/*do {
		//p = rand() % RANGE + 1;
		q = rand() % RANGE + 1;

	} while (!isPrime(p) || !isPrime(q) || (p == (2 * q + 1)));*/

	Ya = modulo_multiplication(g, Xa, p);
	Yb = modulo_multiplication(g, Xb, p);

	Za = modulo_multiplication(Yb, Xa, p);
	Zb = modulo_multiplication(Ya, Xb, p);

	REQUIRE(Zb == 76);
	REQUIRE(Za == 76);

	Xa = 12;
	Xb = 54;

	Ya = modulo_multiplication(g, Xa, p);
	Yb = modulo_multiplication(g, Xb, p);

	Za = modulo_multiplication(Yb, Xa, p);
	Zb = modulo_multiplication(Ya, Xb, p);

	REQUIRE(Zb == 140);
	REQUIRE(Za == 140);

	Xa = 827495279;
	Xb = 947238759;

	Ya = modulo_multiplication(g, Xa, p);
	Yb = modulo_multiplication(g, Xb, p);

	Za = modulo_multiplication(Yb, Xa, p);
	Zb = modulo_multiplication(Ya, Xb, p);

	REQUIRE(Zb == Za);

	Xa = 927495329;
	Xb = 942538751;

	Ya = modulo_multiplication(g, Xa, p);
	Yb = modulo_multiplication(g, Xb, p);

	Za = modulo_multiplication(Yb, Xa, p);
	Zb = modulo_multiplication(Ya, Xb, p);

	REQUIRE(Zb == Za);

}

TEST_CASE("the_algorithm_Baby_step_giant_step", "[single-file]")
{
	long long x = 0;

	x = baby_step_giant_step(21, 2, 29, 5, 8);
	REQUIRE(modulo_multiplication(2, x, 29) == 21);

	x = baby_step_giant_step(25, 3, 31, 5, 8);
	REQUIRE(modulo_multiplication(3, x, 31) == 25);

	x = baby_step_giant_step(12, 2, 37, 5, 8);
	REQUIRE(modulo_multiplication(2, x, 37) == 12);

	x = baby_step_giant_step(21, 6, 41, 6, 8);
	REQUIRE(modulo_multiplication(6, x, 41) == 21);

	x = baby_step_giant_step(11, 3, 43, 6, 8);
	REQUIRE(modulo_multiplication(3, x, 43) == 11);
}