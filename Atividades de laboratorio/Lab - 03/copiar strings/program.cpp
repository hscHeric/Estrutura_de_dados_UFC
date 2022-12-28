char *strcpy(char *destino, char *origem){
    for(int i = 0; i<100; i++){
        *(destino+i) = *(origem+i);
    }
    return destino;
}