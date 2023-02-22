//
//  main.c
//  24.soru
//
//  Created by Ahmet Furkan Yorulmaz on 9.01.2023.
//

#include <stdio.h>
#include <string.h>
void bruh(char arry[],int i,long size,int count){
    int x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0;
    while(i<=size){
        if(arry[i]=='('){
            x1++;
        }
        if(arry[i]==')'){
            x2++;
        }
        if(arry[i]=='{'){
            x3++;
        }
        if(arry[i]=='}'){
            x4++;
        }
        if(arry[i]=='['){
            x5++;
        }
        if(arry[i]==']'){
            x6++;
        }
        if(arry[i]=='<'){
            x7++;
        }
        if(arry[i]=='>'){
            x8++;
        }
        i++;
    }
    if(x1==x2){
        count=count+1;
    }
    if(x3==x4){
        count=count+1;
    }
    if(x5==x6){
        count=count+1;
    }
    if(x7==x8){
        count=count+1;
    }
    if(count==4){
        printf("yes");
    }
    else{
        printf("no");
    }
    
}
int main(int argc, const char * argv[]) {
    char arry[]="(b)a{}[]<j>";
    int count =0;
    long size= strlen(arry)-1;
    int i=0;
    bruh(arry,i,size,count);
    
    return 0;
}
