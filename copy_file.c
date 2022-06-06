#include<stdio.h>
#include<stdlib.h>
int main(){
        FILE *fp1=NULL,*fp2=NULL;
        char ch;
        fp1=fopen("xyz.txt","r");
        fp2=fopen("abc.txt","w");
        if(fp1==NULL){
                printf("no file");
                exit(1);
        }
        if(fp2==NULL){
                printf("no file");
                exit(1);
        }
        while((ch=fgetc(fp1))!=EOF){
                fputc(ch,fp2);
        }
        fclose(fp1);
        fclose(fp2);
        printf("successfully copied");
}

~                                                                                                                                                                                                          
~                                                                                                                                                                                                          
~                              
