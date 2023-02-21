#include <stdio.h>
/*
typedef struct {
    int a;
    double b;
    char c;
}s_t;

void bar(s_t* x)
{
    x->b=3.14;
    x->a=1337;
    x->c='o';
    printf("%d,%lf,%c\n", x->a, x->b, x->c);
}
int main(void){
   s_t x;
   bar(&x);
   return 0;
}

//1337,3.140000,o

*/

/*
int main(void){
    int arr[] = {1,2,3,4,5,6,7};
    for (int i = 0; i <= 6 ; ++i) {
        printf("%d", arr[1]);
    }
    return 0;
}

// 2222222
*/

int main(void){
    const char* s= "hello";
    //char s[] = {"h","e","l","l","o","\0"};
    printf("s='%s'\n", s);

}
