  struct t_RevDataStruct{
    
    uint8_t     CmdType;
    uint8_t     CmdParam;
    uint8_t     XOR8BIT;
    uint16_t    DataLength;
    uint16_t    TotalLength;
    uint8_t     NumberOfBytesReceived;
    uint8_t     RevOKFlag;
    uint8_t     *pRevDataBuf;  
  };
  // ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


unsigned char dataBuffer[8] = {1,2,3,4,5,6,7,8};

struct testStruct {
    unsigned char * pBuffer;
    int id;
};

typedef struct testStruct TS , *pTS;

int main()
{
    int i = 0;
    TS myTS;
    pTS pMyTS;

    pMyTS = &myTS;
    pMyTS->id = 0x0001;
    pMyTS->pBuffer = dataBuffer;

    printf("%x\n", &myTS);
    printf("%x\n", pMyTS);
    for (i = 0; i < 8; i++)
    {
        printf("%x\t", *(pMyTS->pBuffer + i));
    }
    printf("\r\n");
    printf("%d\n",pMyTS->id);

    system("pause");
    return 0;
}

