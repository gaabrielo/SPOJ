#include <stdio.h>
#include <math.h>

int binarySearch(int list[], int numberToFind, int low, int high) {
    
    if (high >= low) { 
        int mid = low + (high - low) / 2;
        
        if (list[mid] == numberToFind) 
            return mid; 
            
        if (list[mid] > numberToFind) 
            return binarySearch(list, numberToFind, low, mid - 1);
            
        return binarySearch(list,numberToFind, mid + 1, high); 
    }
    
    return -1; 
}

int main() {
    int size, tries, i;
    
    do {
        scanf("%d", &size);
    } while (size < 1 || size > pow(10, 5));
    
    int orderedList[size];
    
    do {
        scanf("%d", &tries);
    } while (tries < 1 || tries > pow(10, 5));
    
    int numbersToFind[tries];
    
    for (i = 0; i < size; i++) {
        int num;
        
        do {
            scanf("%d", &num);
        } while (num < 1 || num > pow(10, 9));
        
        orderedList[i] = num;
    }
    
    for (i = 0; i < tries; i++) {
        int num;
        
        do {
            scanf("%d", &num);
        } while (num < 1 || num > pow(10, 9));
        
        numbersToFind[i] = num;
    }
    
    for (int i = 0; i < tries; i++) {     
        int index = binarySearch(orderedList, numbersToFind[i], 0, size-1);
 
        printf("%d\n", index);
    }
    
    return 0;
}
