#include <stdio.h>

int main(){

	int N, i, j = 1;

	scanf("%d", &N);

	for(i = 0; i < N; i++){
		printf("%d %d %d PUM\n", j, j+1, j+2);
		j += 4;
	}

	return 0;
}