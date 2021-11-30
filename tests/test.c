# include <stdio.h>

typedef struct  s_test 
{
    char        *key;
    char        sep;
    char        *value;    
   
}          t_test;

int main (void)
{
    t_test  *test;
    
    test = malloc(sizeof(t_test));
    test->key = "hello";
    printf("test key %s", test->key);
    return (0);
}