
#include "lib.h"
#include <cstring>

bool search (char tab [10][20], char name [1][20], int &pos){
    for(int i=0; i<10; i++){
        if (strcmp (tab[i], name[0])==0){

            pos=i;
            return true;
        }


    }

    return false;
}

