#include <iostream>
using namespace std;
class CAN{

    public:
    uint8_t id;
    uint8_t dlc;
    uint8_t data;
    CAN();
    CAN(uint8_t x,uint8_t y,uint8_t *z);
    CAN(uint8_t x,uint8_t y);
    int ID(uint8_t i);
    int DLC(uint8_t d);
    uint8_t* DATA(uint8_t s1);
    void display();
    };
