#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int main(){
    list *l;
    list *m;
    l=create_list();
    add_init(l,5);
    printf_list(l);
    add_init(l,4);
    printf_list(l);
    add_init(l,3);
    printf_list(l);
    add_init(l,2);
    printf_list(l);
    add_init(l,1);
    printf_list(l);
    delete_list(l);
    m=create_list();
    add_end(m,9);
    printf_list(m);
    add_end(m,4);
    printf_list(m);
    add_end(m,3);
    add(m,7,2);
    printf_list(m);
    serch_data(m,7);
    delete_end(m);
    delete_init(m);
    add_end(m,8);
    printf_list(m);
    delete_data(m,2);
    printf_list(m);
    delete_list(m);
    return 0;
}
