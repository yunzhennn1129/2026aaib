//week11-2a.cpp SOIT106_ADVANCE_001
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	while (N>0) { //Part A
		printf("%d",N%10);
		N = N/10;
	}
}

//week11-2b.cpp SOIT106_ADVANCE_001
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int ans = 0; //Part B
	while (N>0){
		ans = ans*10+N%10; //Part B
		N = N/10;
	}
	printf("%d+%d=%d\n", N, ans, ans+N);
}

//week11-2c.cpp SOIT106_ADVANCE_001
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int ans = 0; //Part B
	int N2 = N; //Part C
	while (N>0){
		ans = ans*10+N%10; //Part B
		N = N/10;
	}
	printf("%d+%d=%d\n", N2, ans, ans+N2);
}
