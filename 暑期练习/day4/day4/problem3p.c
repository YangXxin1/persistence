#include <stdio.h>
#include <stdlib.h>

int main1p(){
	int num = 10;
	int count = 0;
	int i;
	for (i = 0; i < 32; ++i){
		if (num & (1 << i)){
			++count;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}