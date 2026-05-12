#ifndef UDS_STATEMACHINE_H
#define UDS_STATEMACHINE_H

#define EEPROMNameSpace               "my_variables"
#define OutputPin                     28
#define Buffersize                    25

extern bool  NewData;

extern uint8_t BT_rx_buffer[];       
extern bool  statusOfExtraOutputPin;
extern uint8_t brand;
extern char SoftwareVersion[];
extern String Modulename;
void analyse_BT_Protocol(uint8_t receive_BT_Array[]);
void delete_BT_buffer();
extern uint16_t OldOilTempCompValues[16];
extern uint16_t OldOilLevelCompValues[11] ;
extern uint16_t NewOilTempCompValues[16]        ;
extern uint16_t NewOilLevelCompValues[11]        ;

#endif /* UDS_STATEMACHINE_H */