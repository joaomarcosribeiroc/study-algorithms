#include <stdio.h>

void insertion_sort(int a[], int length);

void printting(int a[], int length);

int main (){

  int a[] = {8,89,97,64,2,12,10,3,13,6,3,2,0};

  int size = sizeof(a)/sizeof(int); 
  
  insertion_sort(a, size);
  printting(a, size);
  return 0;
}

void insertion_sort(int a[], int length){
  for (int i = 1; i< length ; i++){
    int key = a[i];
    int j = i -1;

    while ( j >= 0 && a[j] > key){
      a [j + 1] = a[j];
      j = j-1;
    }

    a[j+1] = key;
  }
}


void printting(int a[], int length){ 
  for(int i = 0 ; i < length; i ++){
    printf("a[%d] : %d\n", i, a[i]);
  }
}

