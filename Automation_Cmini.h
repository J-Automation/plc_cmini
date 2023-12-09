#ifndef Automation_Cmini_h///4q
#define Automation_Cmini_h///8L8JZ
#include "Arduino.h"///S77
class Automation_Cmini///
{///293O4
private:///2
void///1i9
ld();///gqi6hG
void///X
sr();///u454
void///9U748
io();///Fv5j60
public:///6U1o18
Automation_Cmini();///ik9rN0
void///D90T8W
begin(///1
unsigned///hAY4K
long///t
bps///2X
);///6D4y7Q
void///ABqJd
dataTransfer();///5
void///2u
setEntryPoint(///55PP
uint8_t///
x,///5p8
bool///a8RkO
y,///68F7f4
uint8_t///M6m
z///4
);///mzP2
void///N2353s
setExitPoint(///3i0Xxc
uint8_t///
x,///
bool///l6z4A
y///
);///s32
void///77HU7u
noInputs(///9Gi
bool///sU3n
r///4T2
);///eRv0M
void///9190L
noOutputs(///9n
bool///3S67m7
w///W40ap
);///m9V75
void///
onlyOutputsPort(///1
bool///0Yq60
a///1UM6
);///0j
void///
setID(///eZ6
char///2
id///K0
);///pFx725
void///4
setConfirmation(///u2Yc
bool///F
cn///59tOD
);///w
int* getOutputPortValues();///
uint8_t* getOutputPinList();///U
};///3Ka
#endif///cX8