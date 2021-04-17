#include <stdio.h>

int main(void) {
    int floor;

    floor = 1;
    while(1){
        printf("何階に行きますか？(1〜3)\n");
        scanf("%d", &floor);
        
        if(floor == 1){
            printf("%d階：化粧品売り場\n", floor);
        }else if(floor == 2){
            printf("%d階：紳士服売り場\n", floor);
        }
        else if(floor == 3){
            printf("%d階：婦人服売り場\n", floor);
        }else if(floor == 0 || floor == 9){
            break;
        }else{
            printf("その階には行けません\n");
        }
    }

    return 0;
}