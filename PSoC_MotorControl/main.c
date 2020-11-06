/* =======================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "math.h"
#include "string.h"

char RX;

//void stepperEnable(int stepperNum, int bit);
void stepMotor(int num);
void moveMotor(int stepperNum, int direction);
int stepState =0;

int stepStateU =0;
int stepStateD =0;
int stepStateF =0;
int stepStateB =0;
int stepStateL =0;
int stepStateR =0;

char moveset[75];
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */    
    UART_Start();
    
    
    // Pin_1 = 12.1 (IN 1),   Pin_2 = 12.2 (IN 2),  Pin_3 = 15.2 (IN 3, B),   Pin_4 = 15.1 (IN 4, B')
    // 1 step = 1.8 degrees;
 

    for(;;)
    {   
        
        int index = 0;
        RX = '0';
        UART_ClearRxBuffer(); //
        while(RX != '+'){

            RX = UART_GetChar();
            if(RX > 31){
                moveset[index] = RX ;
                index++;
                Pin_LED_Write(~Pin_LED_Read());
            }
            CyDelay(50);
            
        }
        
        RX = '0'; // clear RX
        
        
        Pin_LED_Write(0);
        CyDelay(200);
        
    
        int size = sizeof moveset / sizeof *moveset;
        
        for(int i=0; i<size; i++){
            char c = moveset[i];
            // check if moveset is a letter
            if(c>'@'){
                
                int direction = 0;
                if(i+1 < size && moveset[i+1] == '!'){
                    direction = 1; // backwards
                    i++; // increment to next char
                }
                
                switch(c){
                    case 'U':
                        moveMotor(1,direction);
                        break;
                    case 'D':
                        moveMotor(2,direction);
                        break;
                    case 'F':
                        moveMotor(3,direction);
                        break;
                    case 'B':
                        moveMotor(4,direction);
                        break;
                    case 'L':
                        moveMotor(5,direction);
                        break;
                    case 'R':
                        moveMotor(6,direction);
                        break;
                }
                
                // remove spaces until next letter
                while(i+1 < size && moveset[i+1] == ' ') i++;
                
                CyDelay(100);
            }
            else{
                Pin_LED_Write(~Pin_LED_Read());
                CyDelay(10);
                //error
            }
            
            
        }
        
        memset(moveset,0,strlen(moveset)); // 0 entire contents of string
        UART_ClearRxBuffer(); //
        CyDelay(2000);
       
        
        
        
        

    }
}

void stepperEnable(int stepperNum, int bit){
    switch(stepperNum) {
        // create more pins and add them here later
        case 1:
            Pin_Ena_U_Write(bit);
            
            //if enabling -> pass motor's stepstate
            if(bit ==1) stepState =stepStateU;
            //if disabling -> update motor's stepstate
            else stepStateU = stepState;            
            break;
        case 2:
            Pin_Ena_D_Write(bit);
            
            if(bit ==1) stepState =stepStateD;
            else stepStateD = stepState;    
            break;
        case 3:
            Pin_Ena_F_Write(bit);
            
            if(bit ==1) stepState =stepStateF;
            else stepStateF = stepState;    
            break;
        case 4:
            Pin_Ena_B_Write(bit);
            
            if(bit ==1) stepState =stepStateB;
            else stepStateB = stepState;    
            break;
        case 5:
            Pin_Ena_L_Write(bit);
            
            if(bit ==1) stepState =stepStateL;
            else stepStateL = stepState;    
            break;
        case 6:
            Pin_Ena_R_Write(bit);
            
            if(bit ==1) stepState =stepStateR;
            else stepStateR = stepState;    
            break;   
    }
}

void stepMotor(int num){
    switch(num) {
        case 0:
            Pin_1_Write(1);
            Pin_2_Write(0);
            Pin_3_Write(1);
            Pin_4_Write(0);
        break;    
        case 1:
            Pin_1_Write(0);
            Pin_2_Write(1);
            Pin_3_Write(1);
            Pin_4_Write(0);
        break;
        case 2:
            Pin_1_Write(0);
            Pin_2_Write(1);
            Pin_3_Write(0);
            Pin_4_Write(1);
        break;
        case 3:
            Pin_1_Write(1);
            Pin_2_Write(0);
            Pin_3_Write(0);
            Pin_4_Write(1);
        break;
    }
    CyDelay(2);   
}




void moveMotor(int stepperNum, int direction){

    //enable stepper and pass the motor's step state
    stepperEnable(stepperNum,1);
    
    stepState = (stepState+4)%4;
    
    int num;
    if (direction == 1) {
        stepState++;
        for(int i=0; i < 50; i++){
            num  = (i + stepState) % 4;
            stepMotor(num);
        }
        stepState = num;
    }
    else {
        stepState--;
        for(int i=52; i > 2; i--){
            num  = (i + stepState) % 4; //52 + 0   
            stepMotor(num);
        }
        stepState = num;
        
    }
    //disable stepper and update the motor's step state
    stepperEnable(stepperNum,0);
    
}


