#include <stdio.h>
int main(int argc, char* argv[]){
    int x = 2, y = 2,  z = 3;
    printf("%d", x *= x + z); /*双目运算符 优先级最低*/
    return 0;
}