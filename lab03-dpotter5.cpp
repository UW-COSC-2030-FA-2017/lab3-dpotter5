//Drake Potter

//Questions:
/*
1. n = 5, sum is 15
n = 20, sum is 210
n = 100, sum is 5050
n = 256, sum is -32640

2. You can detect an overflow if the sum comes out as a negative value.
n = 256 produces the overflow.

3. n = 256, sum is 32896
n = 1000, sum is 500500
n = 10000, sum is 50005000
n = 65536, sum is -2147450880
n = 65536 produces an overflow.

4. You can detect an overflow if the factorial comes out as a negative value.
n = 20 produces the overflow.

5. n = 20 prodcues the overlow for this as well.

6. The expected value should be 0.
With n = 1 through n = 9, the result is 0 as expected.
Starting with n = 10, the value stops being 0 as it should be, but becomes a number very close to 0.
However for any value of n that is a power of two, you get the correct result. 
I believe this is because how floats are stored in the computer.
Floats are only exact when they're a power of two.
When n is not a power of two, but the result still = 0 it is just rounding errors cancelling each other out.
A similar thing happens when using doubles, but the rounding errors don't cancel out for the same numbers.

7. The numeric error occurs the 6th time going through the loop.
Since floats are only exact when they're a power of two, the 5th time going through the loop
(when you would expect the loop to end), i = ~4.39 which isn't exactly 4.4 so the loop goes through
one more time when it should've stopped there.

8. With doubles, there isn't a numeric error because the doubles are rounded differently so instead of
i being equal ~4.39 it is instead greater than 4.4 so the loop ends after the 5th time like it should.
*/
#include <iostream>;
#include <string>;

using namespace std;

/*short sumOf(short n)
{
short result = 0;
for(int i = 1; i< n+1; i++)
result = result + i;
return result;
}
*/

long sumOf(long n)
{
	long result = 0;
	for (int i = 1; i< n + 1; i++)
		result = result + i;
	return result;
}

/*float fact(long n)
{
long product = 1;
for (int i = 1; i< n + 1; i++)
product = product * i;
return product;
} */

double fact(long n)
{
	long product = 1;
	for (int i = 1; i< n + 1; i++)
		product = product * i;
	return product;
}

/* float ratioSum(float n)
{
	float result = 0;
	float ratio = 1 / n;
	for (int i = 0; i < n; i++)
		result += ratio;
	return result - 1;
} */

double ratioSum(double n)
{
	double result = 0;
	double ratio = 1 / n;
	for (int i = 0; i < n; i++)
		result += ratio;
	return result - 1;
}
int main()
{
	/*bool end = false;
	while (end == false)
	{
		//short n;
		//long n;
		//float n;
		double n;
		cout << "What value of 'n' would you like?" << endl;
		cin >> n;
		cout << "n = " << n << endl;
		//cout << "Sum: "<< sumOf(n) << endl << endl;
		//cout << "Factorial: " << fact(n) << endl << endl;
		cout << "Strange: " << ratioSum(n) << endl << endl;
		cout << "Would you like to input another value? (y/n)" << endl;
		string answer;
		cin >> answer;
		if (answer == "n")
			end = true;
	} */

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	while (1 > 0)
	{

	}

	return 0;
}

