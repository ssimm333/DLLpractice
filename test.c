#include <stdlib.h>
#include <stdio.h>
#include "functions.h"
#include "enum.h"

int test() {

    // TESTING DOUBLE LINKED LIST
    printf("\n---TEST FOR LINKED LIST---\n");

    // test create list
    dllist* list1 = createList();
    if (list1 == NULL) {
        printf("\nList creation failed\n");
    }
    else {
        printf("\nList created\n");
    }
    // test delete list
    deleteList(list1);
    printf("\nList deleted successfully\n");

    // test insert after
    dllist* list2 = createList();
    data newdata = 5;
    insertAfter(list2, newdata);
    printf("\nNumber inserted successfully\n");


    // test insert before
    deleteList(list2);
    printf("\nList deleted successfully\n");
    dllist* list3 = createList();
    newdata = 5;
    printf("\nNumber inserted successfully\n");

    // test delete current node from list
    deleteCurrent(list2);
    printf("\nNode deleted successfully\n");


    // TESTING ORDERED SET
    printf("\n---TEST FOR ORDERED SET---\n");
    // test create set
    OrderedSet* set1 = createOrderedSet();
    if (set1 == NULL) {
        printf("\nSet creation failed\n");
    }
    else {
        printf("\nSet created\n");
    }

    // test delete set
    deleteOrderedSet(set1);
    printf("\nSet deleted successfully\n");

    // test add element
    OrderedSet* set2 = createOrderedSet();
    newdata = 5;
    addElement(set2, newdata);
    printf("\nNumber added successfully\n");
    // duplicate exception test
    addElement(set2, newdata);
    printf("\nDuplicate handled successfully\n");


    // test remove element
    removeElement(set2, 5);
    printf("\nNumber removed successfully\n");

    // not in set exception test

    // just deleted
    removeElement(set2, 5);
    printf("\nNumber not in set\n");
    // was never there to begin with
    removeElement(set2, 3);
    printf("\nNumber not in set\n");

    // testing intersection
    OrderedSet* A = createOrderedSet();
    OrderedSet* B = createOrderedSet();

    addElement(A, 1);
    addElement(A, 2);
    addElement(A, 3);

    printf("\nSet A: ");
    printToStdout(A);

    addElement(B, 2);
    addElement(B, 3);
    addElement(B, 4);

    printf("\nSet B: ");
    printToStdout(B);

    OrderedSet* interset = setIntersection(A, B);
    printf("\nIntersection: A and B: ");
    printToStdout(interset);

    OrderedSet* C = createOrderedSet();
    OrderedSet* D = createOrderedSet();

    addElement(C, 1);
    addElement(C, 2);
    addElement(C, 3);

    addElement(D, 4);
    addElement(D, 5);
    addElement(D, 6);

    printf("\nSet C: ");
    printToStdout(C);

    printf("\nSet D: ");
    printToStdout(D);

    OrderedSet* interset2 = setIntersection(C, D);
    printf("\nIntersection: C and D: ");
    printToStdout(interset2);


    // testing union
    OrderedSet* E = createOrderedSet();
    OrderedSet* F = createOrderedSet();

    addElement(E, 2);
    addElement(E, 3);
    addElement(E, 4);

    addElement(F, 3);
    addElement(F, 4);
    addElement(F, 5);

    OrderedSet* Union = setUnion(E, F);
    printf("\nE: ");
    printToStdout(E);

    printf("\nF: ");
    printToStdout(F);

    printf("\nUnion of E and F: ");
    printToStdout(Union);
    OrderedSet* difference = setDifference(E, F);
    printf("\nDifference of E and F: ");
    printToStdout(difference);

    // two empty sets
	OrderedSet* G = createOrderedSet();
	OrderedSet* H = createOrderedSet();
    OrderedSet* I = setIntersection(G, H);
	printf("\nIntersection of empty sets: ");
	printToStdout(I);
	OrderedSet* Union2 = setUnion(G, H);
	printf("\nUnion of empty sets: ");
	printToStdout(Union2);
	OrderedSet* difference2 = setDifference(G, H);
	printf("\nDifference of empty sets: ");
	printToStdout(difference2);

    return 0;
}