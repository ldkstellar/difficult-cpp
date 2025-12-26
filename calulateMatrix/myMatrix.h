
class myMatrix {
 public:
  myMatrix(int, int);
  void print();
  ~myMatrix();
  int row, col;
  int** data;

 private:
  myMatrix();
};
