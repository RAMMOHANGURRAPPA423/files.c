#include<stdio.h>
int main(){
        FILE *fp1,*fp2;
        int a,b;
        fp1=fopen("abc.txt","r");
        fp2=fopen("xyz.txt","r");
        if(fp1==NULL||fp2==NULL)
        {
                printf("cannot read file\n");
        }
        else{
                a=getc(fp1);
                b=getc(fp1);
                while(a!=EOF&&b!=EOF){
                        a=getc(fp1);
                        b=getc(fp2);
                }
                if(a==b)
                        printf("files are equal");
                        else if(a!=b)
                                printf("files are not equal");


                        fclose(fp1);
                        fclose(fp2);

        }
        return 0;
}
~                                                                                                                                                                                                          
~                                                                                                                                                                                                          
~                                                                                                                                                                                                          
~                             
