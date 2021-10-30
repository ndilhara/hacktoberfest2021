#include <stdio.h>

int main() {

    int limit;

    printf("Enter limit : ");
    scanf("%d",&limit);
    
    for (int i = 2; i <limit ; i++) {
        if(i==2){
            printf("%d is prime number\n",i);

        } else{
            for (int j = 2; j < i; j++) {
                if(i%j==0){
                    break;
                }else if (j==i-1){
                    printf("%d is prime number\n",i);
                }
            }
        }

    }
    
    return 0;
}