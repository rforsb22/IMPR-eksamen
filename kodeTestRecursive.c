#include <stdio.h>

void func(int* out)
{
   *out = 10;
}
int main(void){
    int x;
    func(&x);
    printf("%d", x);
    return 0;
}