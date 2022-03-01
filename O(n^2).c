#include <stdio.h>

int main() {
//Quadratic Time 0(n^2)
int n = 10;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%i * %i = %i\n",i,j,j*i);
		    }
    printf("\n");
  	}
}
