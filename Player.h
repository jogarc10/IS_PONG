#ifndef Player_h
#define Player_h

#include "Court.h"
#include "Windows.h" //This probably shouldn't be here, but declared in another module upwards

//COURT measures
const int MAXNUMBEROFKEYS = 5; //Maybe the same as the comment above, but no so sure of this one

typedef enum {standstill, up, down} tMovement;

typedef bool boolArray[MAXNUMBEROFKEYS]; //Both these arrays are used for registering diferent key inputs
typedef int intArray[MAXNUMBEROFKEYS];

typedef struct {
	int player1Position;
	int player2Position;
	bool service;
} tPlayers;

typedef struct {
	boolArray keysBeingPressed;
	intArray keyCode;
} tInput;

tPlayers resetPlayers();
tInput keyBoardInput();
void transformInput(tMovement &player1Move, tMovement &player2Move, bool &service);
tPlayers movePlayers(tPlayers players);

#endif
