#include<stdio.h>

int main() {
	
	int first = 0, second = 1;
  int temp,n;
	int i =3;

  printf("Enter term to read ");
  scanf("%d",&n);

	while(i<=n) {
		temp = first + second;
		first = second;
		second = temp;
		i++;
	}

	printf("The %dth fibonacci number is %d", n,temp);
	return 0; 
}
