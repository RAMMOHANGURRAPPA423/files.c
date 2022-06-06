#include<stdio.h>
int main(){
        FILE *fp=fopen("xyz.txt","r");
        char ch;
        if(fp==NULL){
                printf("file unable to open");
        }
        else{
                printf("file opened successfully");
                printf("file content is:");
                while(ch=fgetc(fp)!=EOF){
                        printf("%c",ch);
                }
                fclose(fp);
        }
}
~                                                                                                                                                                                                          
~                                                                                                                                                                                                          
~                                                                                                                                                                                                          
~                                                                                                                                                                                                          
~                 
