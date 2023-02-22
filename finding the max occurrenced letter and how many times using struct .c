//
//  main.c
//  18.soru
//
//  Created by Ahmet Furkan Yorulmaz on 9.01.2023.
//
#include <stdio.h>
#include <string.h>
struct breh{
    char letter;
    int maxcount;
};
struct breh bruh (char arry[],long size){
    struct breh u;
    int i=0;
    int j=0;
    int count2=0;
    u.maxcount=0;
    while(j<=size){
        while(i<=size){
            if( arry[j]==arry[i]){
                count2++;
            }
            i++;
        }
        if(u.maxcount<count2){
            u.maxcount=count2;
            u.letter=arry[j];
        }
        count2=0;
        i=0;
        j++;
    }
    return u;
    
    
}
int main(int argc, const char * argv[]) {
    char arry[]="siiiuuuuuu";
    long size= strlen(arry)-1;
    struct breh u=bruh(arry,size);
    printf("%d,%c",u.maxcount,u.letter);
    return 0;
}
