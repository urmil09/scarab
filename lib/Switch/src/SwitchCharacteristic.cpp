#include "SwitchCharacteristic.h"

SwitchCharacteristic :: SwitchCharacteristic(int port) : Characteristic(port){}
void SwitchCharacteristic::write(int dataLen, char *data, int (* digitalWriteCallback)(int, int)) {

    if(data[0] == ON) {
      if(HIGH == digitalWriteCallback(portNumber, HIGH)){
          status = "H";
      }
    }
    else if(data[0] == OFF) {
      if(LOW == digitalWriteCallback(portNumber, LOW)){
          status = "L";
      }
    }
}