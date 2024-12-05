#include <stdlib.h>
#include <stdio.h>
#include "functions.h"
#include "enum.h"
#define MAX_SETS 10

int main() {

	 /*test();*/

    // initialise the array to hold 10 ordered sets
	OrderedSet* setsArray[MAX_SETS] = { NULL };

	// test intersection of two empty ordered sets

	//sets[0] = createOrderedSet();
 //   sets[1] = createOrderedSet();
	//sets[2] = setIntersection(sets[0], sets[1]);

	//printf("\nIntersection of 1 and 2: ");
	//printToStdout(sets[2]);
	//

	//// test for union of two empty ordered sets

	//sets[0] = createOrderedSet();
	//sets[1] = createOrderedSet();
	//sets[2] = setUnion(sets[0], sets[1]);

	//printf("\nUnion of 1 and 2: ");
	//printToStdout(sets[2]);


	//// test for difference of two empty ordered sets

	//sets[0] = createOrderedSet();
	//sets[1] = createOrderedSet();
	//sets[2] = setDifference(sets[0], sets[1]);

	//printf("\nDifference of 1 and 2: ");
	//printToStdout(sets[2]);

	//// now test with data stored in the ordered sets

	//sets[0] = createOrderedSet();
	//sets[1] = createOrderedSet();

	//addElement(sets[0], 1);
	//addElement(sets[0], 2);
	//addElement(sets[0], 3);
	//addElement(sets[0], 4);
	//addElement(sets[0], 5);

	//addElement(sets[1], 3);
	//addElement(sets[1], 4);
	//addElement(sets[1], 5);
	//addElement(sets[1], 6);
	//addElement(sets[1], 7);

	//sets[2] = setIntersection(sets[0], sets[1]);

	//printf("\nIntersection of 1 and 2: ");
	//printToStdout(sets[2]);

	//sets[2] = setUnion(sets[0], sets[1]);

	//printf("\nUnion of 1 and 2: ");
	//printToStdout(sets[2]);

	//sets[2] = setDifference(sets[0], sets[1]);

	//printf("\nDifference of 1 and 2: ");
	//printToStdout(sets[2]);

	//printMenu();

	//// following his input
	//
	//// 1 0 
	//sets[0] = createOrderedSet();
	//printf("\nSet at index 0: ");
	//printToStdout(sets[0]);

	//// 1 1 
	//sets[1] = createOrderedSet();
	//printf("\nSet at index 1: ");
	//printToStdout(sets[1]);

	//// 5 0 1 2
	//sets[2] = setIntersection(sets[0], sets[1]);
	//printf("\nSet Intersection: ");
	//printToStdout(sets[2]);

	//// 6 0 1 3
	//sets[3] = setUnion(sets[0], sets[1]);
	//printf("\nSet Union: ");
	//printToStdout(sets[3]);

	//// 7 0 1 4
	//sets[4] = setDifference(sets[0], sets[1]);
	//printf("\nSet Difference: ");
	//printToStdout(sets[4]);

	//// 3 2 -1				add Element -1 to array index 2
	//int toAdd = -1;
	//if (toAdd < 0) {
	//	// do nothing;
	//}
	//else {
	//	addElement(sets[2], toAdd);
	//}
	//printf("\nFinal set: ");
	//printToStdout(sets[2]);
	//
	//// 5 2 3 4  			set intersection of 2 and 3 stored in 4
	//sets[4] = setIntersection(sets[2], sets[3]);
	//printf("\nSet Intersection: ");
	//printToStdout(sets[4]);


	//// 6 0 2 4				set union of 0 and 2 stored in 4
	//sets[4] = setUnion(sets[0], sets[2]);
	//printf("\nSet Union: ");
	//printToStdout(sets[4]);


	//// 7 3 0 4				set difference of 3 and 0 stored in 4
	//sets[4] = setDifference(sets[3], sets[0]);
	//printf("\nSet Difference: ");
	//printToStdout(sets[4]);

	//// 3 0 1 4 3 1 6 4 8 7 6 2 -1		add elements from 1,4,3,1,6,4,8,7,6,2 to array index 0
	//addElement(sets[0], 1);
	//addElement(sets[0], 4);
	//addElement(sets[0], 3);
	//addElement(sets[0], 1);
	//addElement(sets[0], 6);
	//addElement(sets[0], 4);
	//addElement(sets[0], 8);
	//addElement(sets[0], 7);
	//addElement(sets[0], 6);
	//addElement(sets[0], 2);
	//printf("\nFinal set: ");
	//printToStdout(sets[0]);

	//// 3 1 3 1 5 1 2 7 9 -1				add elements from 3,1,5,1,2,7,9 to array index 1
	//addElement(sets[1], 3);
	//addElement(sets[1], 1);
	//addElement(sets[1], 5);
	//addElement(sets[1], 1);
	//addElement(sets[1], 2);
	//addElement(sets[1], 7);
	//addElement(sets[1], 9);
	//printf("\nFinal set: ");
	//printToStdout(sets[1]);

	//// 4 0 3 9 3 -1						remove elements 3 9 3 from array index 0
	//removeElement(sets[0], 3);
	//removeElement(sets[0], 9);
	//removeElement(sets[0], 3);
	//printf("\nFinal set: ");
	//printToStdout(sets[0]);

	//// 4 1 8 6 6 -1						remove elements 8 6 6 from array index 1
	//removeElement(sets[1], 8);
	//removeElement(sets[1], 6);
	//removeElement(sets[1], 6);
	//printf("\nFinal set: ");
	//printToStdout(sets[1]);

	//// 5 0 1 2							set intersection of 0 and 1 stored in 2
	//sets[2] = setIntersection(sets[0], sets[1]);
	//printf("\nSet Intersection: ");
	//printToStdout(sets[2]);

	//// 6 0 1 3							set union of 0 and 1 stored in 3
	//sets[3] = setUnion(sets[0], sets[1]);
	//printf("\nSet Union: ");
	//printToStdout(sets[3]);

	//// 7 0 1 4							set difference of 0 and 1 stored in 4
	//sets[4] = setDifference(sets[0], sets[1]);
	//printf("\nSet Difference: ");
	//printToStdout(sets[4]);

	//// 5 2 2 3							set intersection of 2 and 2 stored in 3
	//sets[3] = setIntersection(sets[2], sets[2]);
	//printf("\nSet Intersection: ");
	//printToStdout(sets[3]);

	//// 8								terminate program
	////return 0;

	printMenu();
	
	// want this application to run until the user terminates it, hence a do while loop
	do {


		// user input
		int choice;

		// index choice
		int index;
		int input;

		int index1;
		int index2;
		int index3;

		// choosing a function
		printf("\nYour choice: ");
		scanf_s("%i", &choice);

		

		// switch statement
		switch (choice) {

		case 1:
			// 1) create an empty Ordered Set

			// prompts user to enter the index for the new array in SetsArray
			printf("\nPlease enter index (0 - 9) for set to be created: ");
			// read index
			scanf_s("%d", &index);

			// create an empty Ordered Set at index in SetsArray specified by user
			// if index is NULL, create an empty Ordered Set
			if (setsArray[index] == NULL) {
				setsArray[index] = createOrderedSet();
				printf("\nSet at index %d created\n", index);
			}
			else {
				// if index is not NULL, print error
				printf("\nEmpty Ordered Set already exists at index %d in SetsArray.\n", index);
			}
			break;

		case 2:

			// 2) delete the current Ordered 

			// prompts user to enter the index for the new array to be deleted
			printf("\nEnter index (0 - 9) for set to be deleted: ");
			// read index
			scanf_s("%d", &index);

			deleteOrderedSet(setsArray[index]);
			break;

		case 3:

			// 3) add Elements to Ordered Set
			//		prompts user to enter the index in SetsArray of the set to be used
			//		(reads from stdin).
			printf("\nEnter index (0 - 9) for set to be used: ");

			// read index
			scanf_s("%d", &index);


			//		Then, reads numbers continunously form stdin and uses the function 
			//		addElement() to attempt to add the number to the Ordered Set.
			//		This process will stop if a negative number is entered	
			scanf_s("%d", &input);
			while (input >= 0) {
				addElement(setsArray[index], input);
				scanf_s("%d", &input);

				//		For each numberm it will report whether addELement() returned NUMBER_ADDED
				//		or NUMBER_ALREADY_IN_SET. 
				addElement(setsArray[index], input);
			}

			//		Finally, it will call printToStdout() to print the resulting set
			//		(after the last element has been added) to stdout to the screen.
			printToStdout(setsArray[index]);


		case 4:

			// 4) Remove elements from Ordered Set
			//		this function first prompts the user to enter the index in SetsArray of the set to be used
			//		(that is, it reads it from stdin).
			printf("\nEnter index (0 - 9) for set to be used: ");
			scanf_s("%d", &index);

			//		Then it reads numbers continously from stdin and uses function removeElement() to attempt 
			//		to remove the number from the Ordered Set.
			do {
				removeElement(setsArray[index], index);
				scanf_s("%d", &input);
				enum removeElementResult result = removeElement(setsArray[index], input);
			} while (input >= 0);

			//		This process will stop if a negative number is entered. For each number it will report whether 
			//		removeElemenmt() returned NUMBER REMOVED or NUMBER NOT IN SET.At the end, it will call 
			//		printToStdout() to print the resulting set(after the last element has been removed) to stdout.
			printToStdout(setsArray[index]);
			break;

		case 5:

			// 5) Set Intersection.
			//		This option prompts the user to enter three indices i1, i2 and i3 for three sets in SetsArray.
			printf("\nEnter three indeces i1, i2 and i3 to be used: ");
			scanf_s("%d %d %d", &index1, &index2, &index3);

			//		Then it calls function setIntersection(s1, s2) to obtain the intersection of sets i1 and i2 
			setsArray[index3] = setIntersection(setsArray[index1], setsArray[index2]);
			//		and stores the resulting set at index i3.Finally, it prints the resulting set to stdout.
			printToStdout(setsArray[index3]);

			break;

		case 6:

			// 6) Set Union
			//		This option prompts the user to enter three indices i1, i2 and i3 for three sets in SetsArray.
			printf("\nEnter three indeces i1, i2 and i3 to be used: ");
			scanf_s("%d %d %d", &index1, &index2, &index3);

			//		Then it calls function setUnion(s1, s2) to obtain the union of sets i1 and i2 and stores 
			//		the resulting set at index i3.
			setsArray[index3] = setUnion(index1, index2);

			//		Finally, it prints the resulting set to stdout
			printf("Union of sets %d and %d: ", index1, index2);
			printToStdout(setsArray[index3]);
			printf("\n");

			break;

		case 7:


			// 7) Set Difference

			//		This option prompts the user to enter three indices i1, i2 and i3 for three sets in SetsArray.
			printf("\nEnter three indeces i1, i2 and i3 to be used: ");
			scanf_s("%d %d %d", &index1, &index2, &index3);

			//		Then it calls function setDifference(s1,s2) to obtain the difference of sets i1 and i2
			//		(make sure to obtain i1 − i2 and not i2 − ii) and stores the resulting set at index i3.
			setsArray[index3] = setDifference(setsArray[index1], setsArray[index2]);

			//		Finally, it prints the resulting set to stdout.
			printToStdout(setsArray[index3]);
			break;

			printf("\nEnter three indeces i1, i2 and i3 to be used: ");
			scanf_s("%d %d %d", &index1, &index2, &index3);

			break;

		case 8:

			// 8) Terminate the program
			printf("\nTerminating program\n");
			return EXIT_SUCCESS;


		default:
			printf("\nInvalid input\n");
			break;
		}

		printf("\nPress Enter to continue\n");

		// clear buffer
		scanf_s("*c");

		// user input
		scanf_s("*c");

	} while (EXIT_FAILURE);

	

}