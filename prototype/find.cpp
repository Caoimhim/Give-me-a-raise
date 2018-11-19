#include <iostream>
#include <string>
#include "structs.h"
using namespace std;


void findPickup(oRoom oMatMap[3][10][10], oGamer oPlayer, string sFind)
{ 
	bool bFound = false;
	for ( int iCounter = 0; iCounter < oMatMap[oPlayer.iLocation[0]][oPlayer.iLocation[1]][oPlayer.iLocation[2]].iHowManyPickups; iCounter++)
	{ 
		if ( sFind == oMatMap[oPlayer.iLocation[0]][oPlayer.iLocation[1]][oPlayer.iLocation[2]].oArrPickups[iCounter].sNameP)
		{ 
	
			if (oMatMap[oPlayer.iLocation[0]][oPlayer.iLocation[1]][oPlayer.iLocation[2]].oArrPickups[iCounter].bHidden == true)
			{ 
				cout << "You have found a " << sFind << "!" << endl;
				oMatMap[oPlayer.iLocation[0]][oPlayer.iLocation[1]][oPlayer.iLocation[2]].oArrPickups[iCounter].bHidden = false;
				bFound = true;
				break;
				
			}
			else
			{ 
				cout << sFind << " was not hidden." << endl;
			}
		}
	}
	if ( bFound == false)
	{ 
		cout << "It seems you couldn't find any " << sFind << " here." << endl;
	}
}
