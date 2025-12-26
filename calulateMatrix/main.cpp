#include <iostream>

#include "myMatrix.h"

void setValue(myMatrix& other, int value) {
  for (size_t i = 0; i < other.row; i++) {
    for (size_t j = 0; j < other.col; j++) {
      other.data[i][j] = value;
    }
  }
}

myMatrix* sub(const myMatrix& A, const myMatrix& B) {
  if (A.col != B.row) {
    std::cout << "계산이 불가능합니다.";
    return nullptr;
  }

  myMatrix* result = new myMatrix(A.row, B.col);

  for (int i = 0; i < A.row; i++) {      // A의 행
    for (int j = 0; j < B.col; j++) {    // B의 열
      result->data[i][j] = 0;            // 반드시 초기화 필요
      for (int k = 0; k < A.col; k++) {  // A의 열 == B의 행
        result->data[i][j] += A.data[i][k] * B.data[k][j];
      }
    }
  }

  return result;
}

int main(int argc, char const* argv[]) {
  myMatrix matrix1(3, 4);
  setValue(matrix1, 10);
  myMatrix matrix2(4, 3);
  setValue(matrix2, 11);
  myMatrix* result = sub(matrix1, matrix2);

  // ❌ 반복문 전체 구조가 잘못됨
  //    바깥 for: row → 안쪽 for: col 이어야 함
  //    현재는 col 먼저 반복하고 row는 반복도 안 됨

  for (size_t i = 0; i < result->row; i++) {  // ❌ col을 row처럼 사용 중
    for (size_t j = 0; j < result->col;
         j++) {  // ❌ j++가 아니라 i++ → 무한루프
      std::cout << result->data[i][j];
      // ❌ i, j가 뒤바뀜 → data[row][col]이 아니라 data[col][row] 형태가 됨
    }
    std::cout << std::endl;
  }

  return 0;
}