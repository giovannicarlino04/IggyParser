#include "../carlib/gc_iggy.h"
#include "../carlib/gc_file.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h> // Per stampare correttamente uint64_t

int main(int argc, char **argv){
    if(argc >= 2){
        if(gc_file_exists(argv[1])){
            if(gc_isIggyFile(argv[1]))
                gc_parse_iggy(argv[1]);
            else
                gc_analyze_iggy_folder(argv[1]);
        }
        else{
            gc_MessageBox("File does not exist", MB_ICONERROR);
        }

    }
    else{
        gc_MessageBox("usage <Program> <IggyFile>", MB_ICONERROR);
        return 0;
    }
    getchar();
    return 0;
}