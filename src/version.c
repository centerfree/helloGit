#include "version.h"
#include "stdio.h"

int version(){
    return VERSION;
}


int main(){
    fprintf(stdout, "Hello Git! Version %d\n", version());
    return 0;
}