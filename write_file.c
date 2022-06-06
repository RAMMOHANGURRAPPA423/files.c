#include<stdio.h>
int main(){
        FILE *fp=fopen("xyz.txt","w");
        char ch='r';
        if(fp==NULL){
                printf("file unable to open");
        }
        else{
                printf("file opened successfully");
                fputc(ch,fp);
                fputc('s',fp);
                fclose(fp);
        }
}
~                                                                                                                                                                                                          
~                                                                                                                                                                                                          
~            
