#pragma once
#include "myMatrix.h"

#include <iostream>

myMatrix::myMatrix(int row, int col) : row(row), col(col) {
  data = new int*[row];
  for (size_t i = 0; i < row; i++) {
    data[i] = new int[col];
  }

  for (size_t i = 0; i < row; i++) {
    for (size_t j = 0; j < col; j++) {
      data[i][j] = 1;
    }
  }
}
myMatrix::~myMatrix() {
  for (size_t i = 0; i < row; i++) {
    delete[] data[i];
  }
  delete[] data;
}

void myMatrix::print() {
  for (size_t i = 0; i < row; i++) {
    for (size_t j = 0; j < col; j++) {
      std::cout << data[i][j] << " ";
    }
    std::cout << std::endl;
  }
}
