/* Decoder - HW/Lab3 - Spring2021 - CSE140 Computer Architecture 
Authors:
    Uriel Montes
    John Villalvazo

"Decode.c" - Oringal name
*/

#include <stdio.h>

int Rtype(int code[]){
// check the instruction type
// check what operation it is
// check Rs
// check Rt
// check Rd
// check Shamt
// check Funct
    if (code[0] == 0 && code[1] == 0 && code[2] == 0 && code[3] == 0 && code[4] == 0 && code[5] == 0){
        printf("Instruction type: R\n");
        printf("Operation: \n");
        printf("Rs: \n");
        printf("Rt: \n");
        printf("Rd: \n");
        printf("Shamt: \n");
        printf("Funct: \n");
    }
    else{
        return 0;
    }
}

// int Itype(int code[]){
//     return 0;
// }
// int Jtype(int code[]){
//     return 0;
// }

int main(){

    int code[32];
    int num;
    char type;

// user enters machine code
    printf("Enter an instruction in machine code one bit at a time:\n");
    for (int i = 0; i < 32; i++){
        scanf("%d", &num);
        code[i] = num;
    }
    // printf("You entered: ");
    // for (int i = 0; i < 32; i++){
    //     printf("%d", code[i]);
    // }
    // printf("\n");

    Rtype(code);
    // Itype(code);
    // Jtype(code);
    
    // free(code);
    return 0;
}