/* Decoder - HW/Lab3 - Spring2021 - CSE140 Computer Architecture 
Authors:
    Uriel Montes
    John Villalvazo

"Decode.c" - Oringal name
*/

#include <stdio.h>

int Rtype(int code[]){              //Uriel Montes
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

int Itype(int code[]){      //John Villalvazo
    /*
    addi    001000  done
    addui   001001
    andi    001100
    beq     000100
    bne     000101
    lbu     100100
    lhu     100101
    ll      110000
    lui     001111
    lw      100011
    ori     001101
    slti    001010
    sltiu   001011
    sb      101000
    sc      111000
    sh      101001
    sw      101011
    */

   /*
    rs = register source
    rt = 2nd register source
   */

//   int i = 0;

//00100000100001010000000000000000

   if(code[0] == 0 && code[1] == 0 && code[2] == 1 && code[3] == 0 && code[4] == 0 && code[5] == 0){
        printf("Instruction type:I\n");
        printf("Operation (Opcode): %d,%d,%d,%d,%d,%d\n", code[0],code[1],code[2],code[3],code[4],code[5]);
        printf("Rs: %d,%d,%d,%d,%d\n", code[6],code[7],code[8],code[9],code[10]);
        printf("Rt: %d,%d,%d,%d,%d\n", code[11],code[12],code[13],code[14],code[15]);
        printf("Immediate: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", code[16],code[17],code[18],code[19],code[20],code[21],code[22],code[23],code[24],code[25],code[26],code[27],code[28],code[29],code[30], code[31]);

   } else {
//    if (code[0] == 0 && code[1] == 0 && code[2] == 1 && code[3] == 0 && code[4] == 0 && code[5] == 1){
//         printf("Instruction type: I\n");
//         printf("Operation (Opcode): \n");
//         printf("Rs: \n");
//         printf("Rt: \n");
//         printf("Immediate: \n");
//    }


    return 0;
   }
}


// int Jtype(int code[]){
//     return 0;
// }

int main(){
    
    int code[32];   //making space available
    char type;

    char var[32];   //taking the instruction as a char then breaking it up into its individual numbers

// user enters machine code
    printf("Enter an instruction in machine code:\n");
    scanf("%s", var);   //reads number as a "word" then breaks it down to digits

    for (int i = 0; i < 32; i++){
        code[i] = var[i] - '0';
        //scanf("%d", &code[i]); //this will not actually work for a no space input
        
    }
    // printf("You entered: ");
    // for (int i = 0; i < 32; i++){
    //     printf("%d", code[i]);
    // }
    printf("\n");

    Rtype(code);
    Itype(code);
    // Jtype(code);
    
    // free(code);
    return 0;
}