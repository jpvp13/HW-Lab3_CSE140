/* Decoder - HW/Lab3 - Spring2021 - CSE140 Computer Architecture 
Authors:
    Uriel Montes
    John Villalvazo

"Decode.c" - Oringal name
*/

#include <stdio.h>

int main(){

    int code[32];
    int num;

    printf("Enter an instruction in machine code one bit at a time:\n");
    for (int i = 0; i < 32; i++){
        scanf("%d", &num);
        code[i] = num;
    }
    printf("You entered: ");
    for (int i = 0; i < 32; i++){
        printf("%d", code[i]);
    }
    printf("\n");

    return 0;
}
