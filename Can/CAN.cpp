#include "CAN.h"


    CAN::CAN()
    {
        cout<<"Default constructor"<<endl;
    }
    CAN::CAN(uint8_t x,uint8_t y,uint8_t *z):id(x),dlc(y),data(*z)
    {
    }
    CAN::CAN(uint8_t x,uint8_t y):id(x),dlc(y)
    { 
    }

    int CAN:: ID(uint8_t i)
    {
    id = i;
    return 1;
    }
    int CAN::DLC(uint8_t d)
    {
    dlc = d;
      return 2;
    }
   uint8_t* CAN:: DATA(uint8_t s1)
    {
       data=s1;

    }
    void CAN:: display()
    {
      cout<<"ID : "<<unsigned(id)<<"\t DLC :"<<unsigned(dlc)<<"\t DATA :"<<unsigned(data)<<endl;
    }




