//
//  main.c
//  Basit Hesap Makinesi
//
//  Created by gözde on 5.06.2025.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x = 0,y = 0;
    int multiplication,total,fraction,subtraction;
    printf("please enter two numbers");
    scanf("%d%d",&x,&y);
    multiplication= x*y;
    total=x+y;
    fraction= x/y;
    subtraction=x-y;
    if (subtraction<0) {
        subtraction=-1 * subtraction;
    }
    if (y==0 && fraction ==x/y) {
        
        
        fraction= printf("Division by zero");
    }
    printf("multiplication: %d \n",multiplication);
    printf(" total: %d \n", total);
    printf("fraction: %d \n",fraction);
    printf("subtraction: %d \n",subtraction);

    return 0;
}
