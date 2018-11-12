

#include <cstdio>
using namespace std;

int main() {

	int a[]= {5,2,8,13,10,7,3};
	int n = sizeof(a)/sizeof(int);
	int i,j, k;
	
	for(i= 0; i < n; i++){
	   int minIndex = i;
         for(j = i; j < n; j++){
	   if(a[j] < a[minIndex]){
		minIndex = j; 
	   }
	}
		// swap
	 for(k = 0; k < n; k++){
	    printf("%d ", a[k]);
	  }
	   printf("\n");
	 
		int temp = a[i];
		a[i] = a[minIndex];
		a[minIndex] = temp;
	}
	
         for(k = 0; k < n; k++){
	    printf("%d ", a[k]);
	}
	
	return 0;
}




/* Output:
5 2 8 13 10 7 3
2 5 8 13 10 7 3
2 3 8 13 10 7 5
2 3 5 13 10 7 8
2 3 5 7 10 13 8
2 3 5 7 8 13 10
2 3 5 7 8 10 13
*/







