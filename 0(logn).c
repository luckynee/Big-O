#include <stdio.h>

int main() {
//Logarithmic Time 0(log n)
   int a[] = {10,20,30,40,50,60,70,80,90,100};
   int n = sizeof(a)/sizeof(int);
   int i = -1;
   int find = 70;
   int mid;
   int low=0, high = n;
   
		while (low <= high){
			mid = (low + high)/2;
			if(find < a[mid]){
				high = mid -1;
			}
			
			else if (find == a[mid]){
				i = mid;
				break;
			}
			
			else low = mid + 1;
		}
		
		if (i==-1){
			printf("Data tidak ditemukan\n");
		}
		else{
			printf("Data berada pada index ke %d\n",i);
		}
    return 0;

}
