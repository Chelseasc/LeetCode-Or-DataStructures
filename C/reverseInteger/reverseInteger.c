#include <stdio.h>

int main(int x)
{
    long int y = x;
	long int result = 0;
	if(y < 0) {
		y = -y;
	}
	while(y != 0) {
		result = result * 10 + y % 10;
		y /= 10;
	}
	if(y > INT_MAX) {
		return 0;
	}
	return x < 0 ? -result : result;
}
