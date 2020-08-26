#include "argParser.h"

char *getArgValue(char**shellArgs, int argCount, char argName[]){
    int i = 0;
    for(;i < argCount; i++){
        if((strCmp(argName, shellArgs[i]) == 0) && (i+1 < argCount)){
            i++;
            return shellArgs[i];
        }
    }
    /* return NULL se o argumento nao foi passado no terminal*/
    return NULL;
}

int main(int argc, char** argv){
    char *numero = getArgValue(argv, argc, (char*)"-num");
    printf(" [*] o valor passado para o argumento \"num\" foi: %s\n", numero);
    return 0;
}
