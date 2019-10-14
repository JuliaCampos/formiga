#include <iostream>
#include <cstdlib>

#include <cmath>
#include <limits>
#include <climits>

#include "ACO.h"

using namespace std;

#define ITERATIONS		(int) 100

#define NUMBEROFANTS	(int) 1

#define NUMBEROFCITIES	(int) 4

// if (ALPHA == 0) { stochastic search & sub-optimal route }
#define ALPHA			(double) 0.001

// if (BETA  == 0) { sub-optimal route }
#define BETA			(double) 0.001

// Estimation of the suspected best route.
#define Q				(double) 10

// Pheromones evaporation. 
#define RO				(double) 0.5

// Maximum pheromone random number.
#define TAUMAX			(int) 1

//#define INITIALCITY		(int) 0

int main() {

	//	ACO* ANTS = new ACO(NUMBEROFANTS, NUMBEROFCITIES, ALPHA, BETA, Q, RO, TAUMAX, INITIALCITY);
	
		ACO* ANTS_1 = new ACO(NUMBEROFANTS, NUMBEROFCITIES, ALPHA, BETA, Q, RO, TAUMAX, rand() % 4 ); 
		ACO* ANTS_2 = new ACO(NUMBEROFANTS, NUMBEROFCITIES, ALPHA, BETA, Q, RO, TAUMAX, rand() % 4 );
		ACO* ANTS_3 = new ACO(NUMBEROFANTS, NUMBEROFCITIES, ALPHA, BETA, Q, RO, TAUMAX, rand() % 4 );
		ACO* ANTS_4 = new ACO(NUMBEROFANTS, NUMBEROFCITIES, ALPHA, BETA, Q, RO, TAUMAX, rand() % 4 );
		
		ANTS_1->init();
		ANTS_2->init();
		ANTS_3->init();
		ANTS_4->init();

		/*Formiga 1*/
		ANTS_1->connectCITIES(0, 1);
		ANTS_1->connectCITIES(0, 2);
		ANTS_1->connectCITIES(0, 3);


		ANTS_1->connectCITIES(1, 2);
		ANTS_1->connectCITIES(1, 3);


		ANTS_1->connectCITIES(2, 3);

		ANTS_1->setCITYPOSITION(0, 1, 1);
		ANTS_1->setCITYPOSITION(1, 5, 20);
		ANTS_1->setCITYPOSITION(2, 20, 15);
		ANTS_1->setCITYPOSITION(3, 10, 30);

		ANTS_1->printGRAPH();

	//	ANTS_1->printPHEROMONES();

		/* Formiga 2 */
		ANTS_2->connectCITIES(0, 1);
		ANTS_2->connectCITIES(0, 2);
		ANTS_2->connectCITIES(0, 3);

		ANTS_2->connectCITIES(1, 2);
		ANTS_2->connectCITIES(1, 3);

		ANTS_2->connectCITIES(2, 3);

		ANTS_2->setCITYPOSITION(0, 1, 1);
		ANTS_2->setCITYPOSITION(1, 10, 10);
		ANTS_2->setCITYPOSITION(2, 20, 10);
		ANTS_2->setCITYPOSITION(3, 10, 30);

		ANTS_2->printGRAPH();

	//	ANTS_2->printPHEROMONES();

		
		/* Formiga 3 */
		ANTS_3->connectCITIES(0, 1);
		ANTS_3->connectCITIES(0, 2);
		ANTS_3->connectCITIES(0, 3);

		ANTS_3->connectCITIES(1, 2);
		ANTS_3->connectCITIES(1, 3);

		ANTS_3->connectCITIES(2, 3);

		ANTS_3->setCITYPOSITION(0, 1, 1);
		ANTS_3->setCITYPOSITION(1, 10, 10);
		ANTS_3->setCITYPOSITION(2, 20, 10);
		ANTS_3->setCITYPOSITION(3, 10, 30);

		ANTS_3->printGRAPH();

	//	ANTS_3->printPHEROMONES();

		
		
		/* Formiga 4 */
		ANTS_4->connectCITIES(0, 1);
		ANTS_4->connectCITIES(0, 2);
		ANTS_4->connectCITIES(0, 3);

		ANTS_4->connectCITIES(1, 2);
		ANTS_4->connectCITIES(1, 3);

		ANTS_4->connectCITIES(2, 3);

		ANTS_4->setCITYPOSITION(0, 1, 1);
		ANTS_4->setCITYPOSITION(1, 10, 10);
		ANTS_4->setCITYPOSITION(2, 20, 10);
		ANTS_4->setCITYPOSITION(3, 10, 30);

		ANTS_4->printGRAPH();


	//	ANTS_4->printPHEROMONES();

//	for (int i = 0; i < 100; i++) {

			ANTS_1->optimize(ITERATIONS);

			ANTS_2->optimize(ITERATIONS);

			ANTS_3->optimize(ITERATIONS);

			ANTS_4->optimize(ITERATIONS);
	//	}

		ANTS_1->printRESULTS();
		ANTS_2->printRESULTS();
		ANTS_3->printRESULTS();
		ANTS_4->printRESULTS();

		
	

	return 0;
}