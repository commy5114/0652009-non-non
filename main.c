#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*指向非常數資料的非常數指標*/ 
/* 0652009 林明賢 */ 
void BubbleOne(int *data1);

int main(void)
{
	int a[10]={5,78,94,81,45,61,71,62,6,4};
	
	BubbleOne(a);
}


