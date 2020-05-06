#include "version.h"
#include "stdio.h"


int main(){
    fprintf(stdout, "Hello Git! Version %d.%d\n", VERSION_MAJOR, VERSION_MINOR);
    return 0;
}