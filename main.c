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

	int choice, index, input, index1, index2, index3;

	do {
		printf("\nYour choice: ");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			printf("\nPlease enter index (0 - 9) for set to be created: ");
			scanf_s("%d", &index);
			if (setsArray[index] == NULL) {
				setsArray[index] = createOrderedSet();
				printf("\nSet at index %d created\n", index);
			}
			else {
				printf("\nEmpty Ordered Set already exists at index %d in SetsArray.\n", index);
			}
			break;

		case 2:
			printf("\nEnter index (0 - 9) for set to be deleted: ");
			scanf_s("%d", &index);
			deleteOrderedSet(setsArray[index]);
			setsArray[index] = NULL;
			printf("\nSet at index %d deleted\n", index);
			break;

		case 3:
			printf("\nEnter index (0 - 9) for set to be used: ");
			scanf_s("%d", &index);
			printf("\nEnter elements to add (negative number to stop): ");
			while (scanf_s("%d", &input) && input >= 0) {
				addElement(setsArray[index], input);
				if (addElement == NumberAdded) {
					printf("NUMBER ADDED\n");
				}
				else {
					printf("NUMBER ALREADY IN SET\n");
				}
			}
			printToStdout(setsArray[index]);
			break;

		case 4:
			printf("\nEnter index (0 - 9) for set to be used: ");
			scanf_s("%d", &index);
			printf("\nEnter elements to remove (negative number to stop): ");
			while (scanf_s("%d", &input) && input >= 0) {
				removeElement(setsArray[index], input);
				if (removeElement == NumberRemoved) {
					printf("NUMBER REMOVED\n");
				}
				else {
					printf("NUMBER NOT IN SET\n");
				}
			}
			printToStdout(setsArray[index]);
			break;

		case 5:
			printf("\nEnter three indices i1, i2 and i3 to be used: ");
			scanf_s("%d %d %d", &index1, &index2, &index3);
			setsArray[index3] = setIntersection(setsArray[index1], setsArray[index2]);
			printToStdout(setsArray[index3]);
			break;

		case 6:
			printf("\nEnter three indices i1, i2 and i3 to be used: ");
			scanf_s("%d %d %d", &index1, &index2, &index3);
			setsArray[index3] = setUnion(setsArray[index1], setsArray[index2]);
			printToStdout(setsArray[index3]);
			break;

		case 7:
			printf("\nEnter three indices i1, i2 and i3 to be used: ");
			scanf_s("%d %d %d", &index1, &index2, &index3);
			setsArray[index3] = setDifference(setsArray[index1], setsArray[index2]);
			printToStdout(setsArray[index3]);
			break;

		case 8:
			printf("\nTerminating program\n");
			return EXIT_SUCCESS;

		default:
			printf("\nInvalid input\n");
			break;
		}
	} while (1);

	return EXIT_FAILURE;
}
