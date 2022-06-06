#include<stdio.h>
int main(){
        FILE *fp=fopen("xyz.txt","a");
        char ch;
        if(fp==NULL){
                printf("file unable to open");
        }
        else{
                printf("file open successfully");
        fputc('k',fp);
        fclose(fp);
        }
}
~                                                                                                                                                                                                          
~                                                                                                                                                                                                          
~                                                                                                                                                                                                          
~                                                                                                                                                                                                          
~               
