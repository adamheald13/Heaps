#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "Heap.h"
using namespace std;

Heap::Heap(int heapSize) {
  this->heapSize = heapSize;
  this->heap = new int[heapSize + 1];

  generateRandomListOfNumbers();
}

Heap::~Heap() {
  delete[] heap;
}

void Heap::printHeap() {
  int height = 1;

  for(int i = 1; i <= heapSize; i++) {
    cout << this->heap[i] << " ";

    if(i == (pow(2, height) - 1)) {
      cout << endl;
      height++;
    }
  }
}

void Heap::buildHeap() {
  for(int i = heapSize / 2; i >=1; i--) {
    pushDown(i);
  }
}

void Heap::pushDown(int i) {
  int value = heap[i];
  int position = i;

  int k = findK(position);

  while(value > heap[k]) {
    k = findK(position);
    heap[position] = heap[k];
    position = k;
  }

  heap[position] = value;
}

void Heap::pushUp(int i) {

}

int Heap::findK(int position) {
  int k;

  cout << heap[2 * position] << " " << heap[2 * position + 1] << endl;

  if(heap[2 * position] < heap[2 * position + 1]) {
    k = 2 * position;
  } else {
    k = 2 * position + 1;
  }

  return k;
}

void Heap::generateRandomListOfNumbers() {
  srand(1);

  for(int i = 1; i <= heapSize; i++) {
    this->heap[i] = rand() % 2001 - 1000;
  }
}
