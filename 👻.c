#include <💀.h>
int 😃(int 😁,int 😜);
int 😄(int 😁);
int main(void){
  💝("\t\tPseudo-NIM\n\n");
  int 😉=12;
	while(😉>0){
		💝("STICK NUMBER YOU WISH TO TAKE: ");
		int 🧐;
		🧡("%i",&🧐);
		int 🤔=😃(😉,🧐);
		if(🤔==😉){
			continue;
		}
		😉=🤔;
		😉=😄(😉);
	}
	💝("MACHINE WINS.");
	return(0);
}
int 😃(int 😁, int 😜){
	if(😜<1||😜>3){
		💝("\nYOU MUST PICK AN INTEGER BETWEEN 1 AND 3\n\n");
		return 😁;
	}
	int 😭=😁-😜;
	💝("\nPLAYER TOOK %i STICKS.\n",😜);
	💝("%i STICKS REMAINING.\n\n",😭);
	return 😭;
}
int 😄(int 😁){
	int 😜=😁%4;
	int 😭=😁-😜;
	💝("COMPUTER TAKES %u STICKS.\n",😜);
	💝("%i STICKS REMAINING.\n\n",😭);
	return 😭;
}
