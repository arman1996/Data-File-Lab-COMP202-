#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

struct Collection{
	bool				jail;		// Boolean
	int					holiday;
	char				vase;
	unsigned long		cherries;
	short int			exchange;	// Boolean
	bool				frogs;		// Boolean
	bool				waves;		// Boolean
	int					girl;		// Boolean
	unsigned short int	cent;
	char				bomb[8];
	int8_t				houses;
	float				garden;
	double				grain;
	int					mother;		// Boolean
	double				push;
    long int			fire;
};


void readFile(char fileName[]){
	
	struct Collection temp;
	
	FILE * fptr;
	fptr =	fopen(fileName, "rb");
	if(fptr == NULL){
		printf("Error! File May Be NULL\n");
		
		//Program exits if the file pointer returns NULL.
		exit(1);
	}
	
	printf("jail, holiday, vase, cherries, exchange, frogs, waves, girl, "
		"cent, bomb, houses, garden, grain, mother, push, fire\n");

	while(1){
		fread(&temp.jail, sizeof(temp.jail), 1, fptr);
		fread(&temp.holiday, sizeof(temp.holiday), 1, fptr);
		fread(&temp.vase, sizeof(temp.vase), 1, fptr);
		fread(&temp.cherries, sizeof(temp.cherries), 1, fptr);
		fread(&temp.exchange, sizeof(temp.exchange), 1, fptr);
		fread(&temp.frogs, sizeof(temp.frogs), 1, fptr);
		fread(&temp.waves, sizeof(temp.waves), 1, fptr);
		fread(&temp.girl, sizeof(temp.girl), 1, fptr);
		fread(&temp.cent, sizeof(temp.cent), 1, fptr);
		fread(temp.bomb, sizeof(temp.bomb), 1, fptr);
		fread(&temp.houses, sizeof(temp.houses), 1, fptr);
		fread(&temp.garden, sizeof(temp.garden), 1, fptr);
		fread(&temp.grain, sizeof(temp.grain), 1, fptr);
		fread(&temp.mother, sizeof(temp.mother), 1, fptr);
		fread(&temp.push, sizeof(temp.push), 1, fptr);
		fread(&temp.fire, sizeof(temp.fire), 1, fptr);
	
		if( feof(fptr) ) {
			break;
		}

		printf("%i, %i, %c, %lu, %i, %i, %i, %i, %u, %s, %i, %f, %f, %i, %f, "
		"%lx\n", 
		temp.jail, temp.holiday, temp.vase, temp.cherries, temp.exchange, 
		temp.frogs, temp.waves, temp.girl, temp.cent, temp.bomb, 
		temp.houses, temp.garden, temp.grain, temp.mother, temp.push, 
		temp.fire);
	
	}
	
	fclose(fptr);
}

void usage(){
	fprintf(stderr, "Usage: The given file does not exist\n");
	
	// Program exits if the file name is invalid or file doesnt exits.
	exit(1);
}



// Decimal: 28
// Octal: 034 (0 before)
// Hex: 0x1c (0x before)



int main(int argc, char **argv) {
	
	if(argc < 2){
		usage();
	}
	
	readFile(argv[1]);
	
	return 0;
	
	exit(0);
}


