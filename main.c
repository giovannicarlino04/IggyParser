#include "../carlib/gc_iggy.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h> // Per stampare correttamente uint64_t

int main(int argc, char **argv){
    if(argc >= 2){
        if(gc_isIggyFile(argv[1]))
            gc_parse_iggy(argv[1]);
        else
            gc_analyze_iggy_folder(argv[1]);
    }
    else{
        printf("Errm... Did you forget to load an iggy file?\n");
        return 0;
    }
    getchar();
    return 0;
}