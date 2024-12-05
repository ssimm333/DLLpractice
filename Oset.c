#include <stdlib.h>
#include <stdio.h>
#include "functions.h"
#include "enum.h"


// create ordered set
OrderedSet* createOrderedSet() {
	// allocate memory
	OrderedSet* set = (OrderedSet*)malloc(sizeof(OrderedSet));

	// test for allocation error
	if (set == NULL) {
		return AllocationError;
	}

	// allocate memory for head node
	set->head = (dllNode*)malloc(sizeof(dllNode));

	// test for allocation error
	if (set->head == NULL) {
		free(set);
		return AllocationError;
	}

	// allocate memory for tail node
	set->tail = (dllNode*)malloc(sizeof(dllNode));

	// test for allocation error
	if (set->tail == NULL) {
		free(set->head);
		free(set);
		return AllocationError;
	}

	// set pointers
	set->head->next = set->tail;
	set->head->prev = NULL;
	set->tail->next = NULL;
	set->tail->prev = set->head;
	set->current = set->head;
	set->size = 0;
	return set;
}

// delete the ordered set
void deleteOrderedSet(OrderedSet* set) {
	// check valid set exists
	if (set == NULL) {
		return;
	}
	dllNode* current = set->head;
	while (current != NULL) {
		dllNode* next = current->next;
		free(current);
		current = next;
	}
	free(set);
}

// insert new node and maintain ascending order and avoiding duplicates
enum ReturnValue addElement(OrderedSet* set, data newdata) {
// check valid set exists
	if (set == NULL) {
		return AllocationError;
	}

	// check if the new data is already in the set
	dllNode* current = set->head;
	while (current != NULL) {
		if (current->d == newdata) {
			return NumberInSet;
		}
		current = current->next;
	}

	gotoHead(set);

	// find correct position for the node
	if (set->size == 0) {
		insertAfter(set, newdata);
		return NumberAdded;
	}

	while (set->current->d < newdata) {
		gotoNextNode(set);
		if (set->current->d == newdata) {
			return NumberInSet;
		}
		else {
			if (set->current->next == NULL) {
				insertAfter(set, newdata);
				return NumberAdded;
				set->size++;
			}
		}
	}
}

enum ReturnValue removeElement(OrderedSet* set, int elem) {
	// check valid set exists
	if (set == NULL) {
		return AllocationError;
	}
	
	// look if value is there 
	if (set->size == 0) {
		return NumberNotInSet;
	}

	gotoHead(set);
	while (set->current->d != elem) {
		gotoNextNode(set);
		if (set->current->d == elem) {
			deleteCurrent(set);
			return NumberRemoved;
			set->size--;
		}
		else {
			if (set->current->next == NULL) {
				return NumberNotInSet;
			}
		}
	}
}

// print the common elements in each set, maintaining order
//OrderedSet* setIntersection(OrderedSet* set1, OrderedSet* set2) {
//	
//	OrderedSet* interset = createOrderedSet();
//
//	if (set1->size == 0 || set2->size == 0) {
//		return NULL;
//	}
//
//	else {
//		set1->current = set1->head->next;
//		set2->current = set2->head->next;
//
//		while (set1->current != set1->tail) {
//			while (set2->current != set2->tail) {
//				if (set1->current->d == set2->current->d) {
//					addElement(interset, set1->current->d);
//				}
//				else {
//					set2->current = set2->current->next;
//				}
//			}
//			set1->current = set1->current->next;
//		}
//	}
//
//	if (interset->size == 0) {
//		return NULL;
//	}
//
//	return interset;
//}

OrderedSet* setIntersection(OrderedSet* set1, OrderedSet* set2) {

	//OrderedSet* interset = createOrderedSet();
	//dllNode* current1 = set1->head->next;
	//dllNode* current2 = set2->head->next;

	//int added;

	//while (current1 != NULL && current2 != NULL) {
	//	if (current1->d == current2->d) {
	//		added = addElement(interset, current1->d);
	//		
	//		if (added == 0) {
	//			printf("\nError");
	//		}

	//		current1 = current1->next;
	//		current2 = current2->next;
	//	}
	//	else if (current1->d < current2->d) {
	//		current1 = current1->next;
	//	}
	//	else {
	//		current2 = current2->next;
	//	}
	//	return interset;
	//}

	OrderedSet* interset = createOrderedSet();

	dllNode* current1 = set1->head;
	while (current1 != NULL) {
		dllNode* current2 = set2->head;
		while (current2 != NULL) {
			if (current1->d == current2->d) {
				if (interset->head == NULL || interset->head->d != current1->d) {
					addElement(interset, current1->d);
				}
				break;
			}
			current2 = current2->next;
		}
		current1 = current1->next;
	}

	return interset;
}

// print all the elements in each set, avoiding duplicates, and maintaining ascending order 
OrderedSet* setUnion(OrderedSet* set1, OrderedSet* set2) {
	
	OrderedSet* unionset = createOrderedSet();
	
	if (set1 == NULL && set2 == NULL) {
		return NULL;
	}

	else if (set1 == NULL) {
		return set2;
	}

	else if (set2 == NULL) {
		return set1;
	}

	else {
		while (set1->current != set1->tail) {
			addElement(unionset, set1->current->d);
			set1->current = set1->current->next;
			while (set2->current != set2->tail) {
				addElement(unionset, set2->current->d);
				set2->current = set2->current->next;
			}
		}
		return unionset;
	}
}

// print all the elements in set1 that are not in set2
OrderedSet* setDifference(OrderedSet* set1, OrderedSet* set2) {
	OrderedSet* diffset = createOrderedSet();

	dllNode* current1 = set1->head;
	while (current1 != NULL) {
		dllNode* current2 = set2->head;
		int found = 0;
		while (current2 != NULL) {
			if (current1->d == current2->d) {
				found = 1;
				break;
			}
			current2 = current2->next;
		}
		if (!found) {
			addElement(diffset, current1->d);
		}
		current1 = current1->next;
	}

	return diffset;
}

// print the ordered set in format {num1,num2,...numn}
// empty set is denotes as {}
void printToStdout(OrderedSet* set) {
	if (set == NULL) {
		printf("{}");
		return;
	}

	if (set->head->next == set->tail) {
		printf("{}");
		return;
	}
	printf("{");
	gotoHead(set);

	if (set->current->next == set->tail) {
		printf("%d}", set->current->d);
		return;
	}

	gotoNextNode(set);

	while (set->current->next != set->tail) {
		printf("%d,", set->current->d);
		gotoNextNode(set);
	}
	printf("%d}", set->current->d);
}

void printMenu() {
	printf("\nChoose from the following:");
	printf("\n1) Create empty ordered set");
	printf("\n2) Delete ordered set");
	printf("\n3) Add element to ordered set");
	printf("\n4) Remove element from ordered set");
	printf("\n5) Set intersection");
	printf("\n6) Set union");
	printf("\n7) Set difference");
	printf("\n8) Terminate program\n");
}
