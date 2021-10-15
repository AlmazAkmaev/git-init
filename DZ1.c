#include <stdio.h>

int main(){
    int m[16];
    int a, b;

    printf("Enter your number < 1024: ");

    scanf("%d", &b);

		if (b >= 1024){
		printf("Error: The entered number is too large!\n");
		return 0;
	}
	if (b < 0){
		printf("Error: The entered number less than zero!\n");
		return 0;
	}

    while(b>1){
        m[a]=b%2;
        b=b/2;
        a++;
    }
    m[a]=b;
    
    for(a;a>=0;a--) 
        printf("%d", m[a]);
}
