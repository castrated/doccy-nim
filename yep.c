#include <stdio.h>
int 😃(int 😁,int 😜);
int 😄(int 😁);
int main(void){
  printf("\t\tPseudo-NIM\n\n");
  int 😉=12;
	while(😉>0){
		printf("STICK NUMBER YOU WISH TO TAKE: ");
		int 🧐;
		scanf("%i",&🧐);
		int 🤔=😃(😉,🧐);
		if(🤔==😉){
			continue;
		}
		😉=🤔;
		😉=😄(😉);
	}
	printf("MACHINE WINS.");
	return 0;
}
int 😃(int 😁, int 😜){
	if(😜<1||😜>3){
		printf("\nYOU MUST PICK AN INTEGER BETWEEN 1 AND 3\n\n");
		return 😁;
	}
	int 😭=😁-😜;
	printf("\nPLAYER TOOK %i STICKS.\n",😜);
	printf("%i STICKS REMAINING.\n\n",😭);
	return 😭;
}
int 😄(int 😁){
	int 😜=😁%4;
	int 😭=😁-😜;
	printf("COMPUTER TAKES %u STICKS.\n",😜);
	printf("%i STICKS REMAINING.\n\n",😭);
	return 😭;
}
