#ifndef HEAP_H
#define HEAP_H

class Heap {
public:
  Heap(int heapSize);
  ~Heap();
  void printHeap();
  void buildHeap();

private:
  int *heap;
  int heapSize;

  void pushDown(int i);
  void pushUp(int i);

  int findK(int position);
  void generateRandomListOfNumbers();
};

#endif
