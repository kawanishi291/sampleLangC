#include <stdio.h>

// �|���Z

int main(void) {
	int i;
	int j;

    for (j = 1; j < 10; j++){
    	for (i = 1; i < 10; i++){
        	printf("%d\t", i*j);
    	}
    	printf("\n");
    }

    return 0;
}