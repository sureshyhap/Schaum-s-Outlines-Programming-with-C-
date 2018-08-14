#include <iostream>

class Matrix {
public:
  Matrix(double a = 0, double b = 0, double c = 0, double d = 0) {
    data[0][0] = a;
    data[0][1] = b;
    data[1][0] = c;
    data[1][1] = d;
    determinant = deter();
  }
  Matrix(const Matrix& m) {
    data[0][0] = m.data[0][0];
    data[0][1] = m.data[0][1];
    data[1][0] = m.data[1][0];
    data[1][1] = m.data[1][1];
    determinant = m.determinant;
  }
  ~Matrix() {
    delete p_inv;
  }
  double det() const;
  bool isSingular();
  const Matrix& inverse();
  void print() const;
private:
  double deter();
  double data[2][2];
  int determinant;
  Matrix* p_inv;
};

double Matrix::deter() {
  return (data[0][0] * data[1][1]) - (data[0][1] * data[1][0]);
}

double Matrix::det() const {
  return determinant;
}

bool Matrix::isSingular() {
  return (determinant == 0 ? true : false);
}

const Matrix& Matrix::inverse() {
  if (isSingular()) {
    p_inv = new Matrix;
    return *p_inv;
  }
  p_inv = new Matrix(data[1][1], -1 * data[0][1], -1 * data[1][0], data[0][0]);
  p_inv->data[0][0] /= (this->determinant);
  p_inv->data[0][1] /= (this->determinant);
  p_inv->data[1][0] /= (this->determinant);
  p_inv->data[1][1] /= (this->determinant);
  return *p_inv;
}

void Matrix::print() const {
  std::cout << "[" << data[0][0] << " " << data[0][1] << "]\n" << "[" << data[1][0] << " " << data[1][1] << "]\n\n";
}

int main(int argc, char* argv[]) {
  Matrix m(5, 2, 7, 6);
  std::cout << m.det() << std::endl;
  std::cout << m.isSingular() << std::endl;
  m.print();
  (m.inverse()).print();
  
  return 0;
}
