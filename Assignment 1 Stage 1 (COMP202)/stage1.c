#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

struct Stage1{
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
} stage1Initialize = {0, 034, 'S', 0xa9, 0, 1, 1, 1, 1594, "apples", -2, 
70.616928, -0.016311, 0, -0.000014, -1591};


// Decimal: 28
// Octal: 034 (0 before)
// Hex: 0x1c (0x before)



int main(int argc, char **argv) {
	
	printf("jail, holiday, vase, cherries, exchange, frogs, waves, girl, "
	"cent, bomb, houses, garden, grain, mother, push, fire\n");
	
	printf("%i, %i, %c, %lu, %i, %i, %i, %i, %u, %s, %i, %f, %f, %i, %f, "
	"%lx\n", 
	stage1Initialize.jail, stage1Initialize.holiday, stage1Initialize.vase, 
	stage1Initialize.cherries, stage1Initialize.exchange, 
	stage1Initialize.frogs, stage1Initialize.waves, stage1Initialize.girl, 
	stage1Initialize.cent, stage1Initialize.bomb, stage1Initialize.houses, 
	stage1Initialize.garden, stage1Initialize.grain, stage1Initialize.mother, 
	stage1Initialize.push, stage1Initialize.fire);
	
	exit(0);
}


