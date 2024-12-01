#include <stdio.h>
int main() {
  	int a[5]={1, 2, 3, 4, 5};
  	int n = 5;
	int newValue, index;
	for (int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\nVi tri can sua: ");
	scanf("%d" ,&index);
	printf("Gia tri moi: ");
	scanf("%d", &newValue);
	a[index] = newValue;
	for (int i = 0; i < n; i++){
    	printf("%d ", a[i]);
    }
	
  return 0;
}

