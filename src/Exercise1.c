/*
1.	Write a program that receives an n-digit number then output
its n digits from least to most significant:
Ex:
 ____________________________________
| Input: 132768                      |
| Output: 8 6 7 2 3 1                |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	//Your codes here
	int n;
	while(testcase != 0)
	{
	    n = testcase % 10;
	    printf("%d ",n);
	    testcase = (testcase - n) / 10;
	}
	
	return 0;
}
