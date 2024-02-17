#include "Schedular.h"

 int main (){
   
  
  OS_Init();
  
  
  OS_CreateTask(Send_KeepAliveTask);
  OS_CreateTask(Receive_KeepAliveTask);
  
  OS_CreateTask(switchStatesTask);
  
  OS_CreateTask(Process_ADC_ReadingTask);
  OS_CreateTask(DTCTask);
  OS_CreateTask(No_CommunicationTask);
  OS_CreateTask(OverheatTask);
  OS_CreateTask(SendToPCTask);
 
  OS_Start();
  
  
while(1)
  {
    
  }
  
  
}       