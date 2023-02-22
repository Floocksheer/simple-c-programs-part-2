//
//  main.c
//  3. soru
//
//  Created by Ahmet Furkan Yorulmaz on 4.01.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char nums[3];
    nums[3]='\0';
    int i=2;
    int number=123;
    while(i>=0){
        nums[i]=(number%10)+'0';
        number=number/10;
        
        i--;
    }
    printf("%s",nums);
        return 0;
}

