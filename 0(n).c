#include <stdio.h>

int main() {
//Linear Time 0(n)
   int a[10] = {10,53,44,33,22,41,25,70,51,90};
   int i; 
   int max = 0;
   for(i=0;i<10;i++){
		if(max <= a[i]){
			max =a[i];
		}
	}
		printf("%d",max);

    return 0;

}
