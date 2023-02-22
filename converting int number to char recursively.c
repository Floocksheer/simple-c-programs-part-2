//
//  main.c
//  4.soru
//
//  Created by Ahmet Furkan Yorulmaz on 6.01.2023.
//

#include <stdio.h>

char * bruh(int number,int a,char nums[]){
        if(a<0){
        return nums;
}
    else{
        nums[a]=(number%10)+'0';
        return bruh(number/10,a-1,nums);
    }
}
int main(int argc, const char * argv[]) {
    int a=1;
    int number=543;
    while(number/10 != 0){
        number=number/10;
        a=a+1;
    }
    char nums[a];
    a=a-1;
    number=543;
    
    printf("%s\n", bruh(number,a,nums));
    
   
    return 0;
}
