/* Decoder - HW/Lab3 - Spring2021 - CSE140 Computer Architecture 
Authors:
    Uriel Montes
    John Villalvazo

"Decode.c" - Oringal name
*/

#include <stdio.h>
#include <string.h>

int Rtype(int code[]){              //Uriel Montes
/*
add     10 0000 (funct)
addu    10 0001 (funct)
and     10 0100 (funct)
jr      00 1000 (funct)
nor     10 0111 (funct)
or      10 0101 (funct)
slt     10 1010 (funct)
sltu    10 1011 (funct)
sll     00 0000 (funct)
srl     00 0010 (funct)
sub     10 0010 (funct)
subu    10 0011 (funct)
*/

// check the instruction type
// check what operation it is
// check Rs
// check Rt
// check Rd
// check Shamt
// check Funct
    if (code[0] == 0 && code[1] == 0 && code[2] == 0 && code[3] == 0 && code[4] == 0 && code[5] == 0){
        printf("Instruction type: R\n");

        if (code[] == && code[] == && code[] == && code[] == && code[] == && code[] == )

        printf("Operation: \n");
        printf("Rs: \n");
        printf("Rt: \n");
        printf("Rd: \n");
        printf("Shamt: \n");
        printf("Funct: \n");
    }

    else if(code[]){

    }

    else{
        return 0;
    }
}

int Itype(int code[]){      //John Villalvazo
    /*
    addi    001000  -
    addui   001001  -
    andi    001100  -
    beq     000100  -
    bne     000101  -
    lbu     100100  -
    lhu     100101  -
    ll      110000  -
    lui     001111  -
    lw      100011  -
    ori     001101  -
    slti    001010  -
    sltiu   001011  -
    sb      101000  -
    sc      111000  -
    sh      101001  -
    sw      101011  -
    */

   /*
    rs = register source
    rt = 2nd register source
   */

//   int i = 0;

//00100000100001010000000000000000
    // const char* appended;
    // appended = malloc(strlen(code)+1 +4 );
    // for(int i = 6; i < 11; i++){
    //     char x = code[i];
    //     int num = x - '0';
    //     strcpy(appended, x);
    //     strcat(appended, code[i]);
    //     // strcpy(value, const char num);

    //     printf(appended);

    //     }

    /*
 
    Need to check code[6-10] for the register, trying to do it dynamically without hard coding to much, but it seems like we may need to do that
    similar for Rt and Rd. Similarly to shamt and func. 


    */


   if(code[0] == 0 && code[1] == 0 && code[2] == 1 && code[3] == 0 && code[4] == 0 && code[5] == 0){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): addi\n");
        
        // printf("Rs: ");
        // printf("Rt: %d,%d,%d,%d,%d\n", code[11],code[12],code[13],code[14],code[15]);
        // printf("Immediate: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", code[16],code[17],code[18],code[19],code[20],code[21],code[22],code[23],code[24],code[25],code[26],code[27],code[28],code[29],code[30], code[31]);

    } 
    else if(code[0] == 0 && code[1] == 0 && code[2] == 1 && code[3] == 0 && code[4] == 0 && code[5] == 1){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): addiu");
        // printf("Instruction type: I\n");
        // printf("Operation (Opcode): \n");
        // printf("Rs: \n");
        // printf("Rt: \n");
        // printf("Immediate: \n");
//    }

    } 

    else if (code[0] == 0 && code[1] == 0 && code[2] == 1 && code[3] == 1 && code[4] == 0 && code[5] == 0){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): andi");
    }

    else if (code[0] == 0 && code[1] == 0 && code[2] == 0 && code[3] == 1 && code[4] == 0 && code[5] == 0){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): beq");
    }

    else if (code[0] == 0 && code[1] == 0 && code[2] == 0 && code[3] == 1 && code[4] == 0 && code[5] == 1){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): bne");
    }

    else if (code[0] == 1 && code[1] == 0 && code[2] == 0 && code[3] == 1 && code[4] == 0 && code[5] == 0){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): lbu");
    }

    else if (code[0] == 1 && code[1] == 0 && code[2] == 0 && code[3] == 1 && code[4] == 0 && code[5] == 1){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): lhu");
    }

    else if (code[0] == 1 && code[1] == 1 && code[2] == 0 && code[3] == 0 && code[4] == 0 && code[5] == 0){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): ll");
    }

    else if(code[0] == 0 && code[1] == 0 && code[2] == 1 && code[3] == 1 && code[4] == 1 && code[5] == 1){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): lui");
    }

    else if (code[0] == 1 && code[1] == 0 && code[2] == 0 && code[3] == 0 && code[4] == 1 && code[5] == 1){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): lw");
    }

    else if (code[0] == 0 && code[1] == 0 && code[2] == 1 && code[3] == 1 && code[4] == 0 && code[5] == 1){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): ori");
    }

    else if (code[0] == 0 && code[1] == 0 && code[2] == 1 && code[3] == 0 && code[4] == 1 && code[5] == 0){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): slti");
    }

    else if (code[0] == 0 && code[1] == 0 && code[2] == 1 && code[3] == 0 && code[4] == 1 && code[5] == 1){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): sltiu");
    }

    else if (code[0] == 1 && code[1] == 0 && code[2] == 1 && code[3] == 0 && code[4] == 0 && code[5] == 0){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): sb");
    }

    else if (code[0] == 1 && code[1] == 1 && code[2] == 1 && code[3] == 0 && code[4] == 0 && code[5] == 0){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): sc");
    }

    else if (code[0] == 1 && code[1] == 0 && code[2] == 1 && code[3] == 0 && code[4] == 0 && code[5] == 1){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): sh");
    }

    else if (code[0] == 1 && code[1] == 0 && code[2] == 1 && code[3] == 0 && code[4] == 1 && code[5] == 1){
        printf("Instruction Type: I\n");
        printf("Operation (Opcode): sw");
    }

    else {
        //end
        return 0;
   }
}


int Jtype(int code[]){
/*
j       000010
jal     000010
*/

    return 0;
}

int main(int argc, char** argv){

    const char *register_number[32] = {"R0","R1","R2","R3","R4","R5","R6","R7","R8","R9","R10","R11","R12","R13","R14","R15","R16","R17","R18","R19","R20","R21","R22","R23","R24","R25","R26","R27","R28","R29","R30","R31"};
    const char *register_name[32] = {"zero","at","v0","v1","a0","a1","a2","a3","t0","t1","t2","t3","t4","t5","t6","t7","s0","s1","s2","s3","s4","s5","s6","s7","t8","t9","k0","k1","gp","sp","fp","ra"};
    
    int code[32];   //making space available
    char type;

    char var[32];   //taking the instruction as a char then breaking it up into its individual numbers

// user enters machine code
    printf("Enter an instruction in machine code:\n");
    scanf("%s", var);   //reads number as a "word" then breaks it down to digits

    for (int i = 0; i < 32; i++){
        code[i] = var[i] - '0'; //convert the char into a digit
        
    }
    printf("\n");

    Rtype(code);
    Itype(code);
    // Jtype(code);
    
    // free(code);
    return 0;
}

/*  TEST CASE machine code

*/