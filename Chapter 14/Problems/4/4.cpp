#include <iostream>
#include <vector>

typedef std::vector<int> BinaryCode;
typedef BinaryCode::iterator BCIterator;

int unsignedValue(BinaryCode bc);
BinaryCode getUnsignedCode(unsigned n);
int signedValue(BinaryCode bc);
BinaryCode getSignedCode(int n);

int main(int argc, char* argv[]) {

  std::vector<int> v;
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);

  std::cout << unsignedValue(v) << std::endl;

  BinaryCode w;
  w = getUnsignedCode(13);
  for (BCIterator it = w.begin(); it != w.end(); ++it) {
    std::cout << *it << std::endl;
  }

  BinaryCode x;
  x.push_back(1);
  x.push_back(0);
  x.push_back(1);
  x.push_back(1);
  x.push_back(1);
  x.push_back(0);

  std::cout << signedValue(x) << std::endl;

  int n = -16;
  BinaryCode z = getSignedCode(n);
  
  for (BCIterator it = z.begin(); it != z.end(); ++it) {
    std::cout << *it << std::endl;
  }  
  
  return 0;
}

// Sums the powers of 2 where a 1 is
int unsignedValue(BinaryCode bc) {
  int sum = 0;
  int i = 0;
  for (BCIterator it = bc.end(); it != bc.begin(); ++i) {
    --it;
    if (*it == 1) {
      int prod = 1;
      for (int j = 0; j < i; ++j) {
	prod *= 2;
      }
      sum += prod;
    }
  }
  return sum;
}


BinaryCode getUnsignedCode(unsigned n) {
  BinaryCode v;
  while (n > 0) {
    if (n % 2 == 1) {
      v.push_back(1);
    }
    else {
      v.push_back(0);
    }
    n /= 2;
  }
  BinaryCode w;
  int i = 0;
  // w becomaes the reverse of v because of the ordering
  // of the 1s and 0s is backwards after the previous
  // algorithm
  for (BCIterator it = v.end(); it != v.begin(); ++i) {
    --it;
    w.push_back(*it);
  }
  return w;
  // Special case of value equaling zero
  if (v.size() == 0) {
    v.push_back(0);
  }
  return v;
}

int signedValue(BinaryCode bc) {
  // If there is a 1 in the first digit,
  // calculate its negative value
  int neg_prod = 1;
  if (bc[0] == 1) {
    int neg_pow = bc.size() - 1;
    for (int i = 0; i < neg_pow; ++i) {
      neg_prod *= 2;
    }
  }
  // 0 in the first digit
  else {
    neg_prod = 0;
  }

  // Finds the positive terms value using
  // the rest of the bit string
  int pos_pow = bc.size() - 2;
  int pos_sum = 0;
  for (int i = 0; i <= pos_pow; ++i) {
    if (bc[i] == 0) {
      continue;
    }
    int prod = 1;
    for (int j = 0; j < i; ++j) {
      prod *= 2;
    }
    prod /= 2;
    pos_sum += prod;
  }
  int sum = pos_sum - neg_prod;
  return sum;
}

BinaryCode getSignedCode(int n) {
  BinaryCode v;
  // The signed code will be related to the
  // unsigned code of the absolute value
  // of the number so calculate it
  BinaryCode w = getUnsignedCode(n > 0 ? n : -n);

  // The negative term is set to 0 by default
  v.push_back(0);

  if (n != 0) {
    for (BCIterator it = w.begin(); it != w.end(); ++it) {
      v.push_back(*it);
    }
  }
  // If n == 0
  else {
    return v;
  }
  // If the number is positive its string is just 0 followed by
  // what getUnsignedCode gives which has already been found
  if (n > 0) {
    return v;
  }
  if (n < 0) {
    // Tests if n is a power of 2
    bool is_pow_of_2 = true;
    // If the number is a power of 2, there will
    // be a 1 in the first digit instead of a 0
    // so check this
    if (w[0] == 1) {
      for (int i = 1; i < w.size(); ++i) {
	if (w[i] == 1) {
	  is_pow_of_2 = false;
	  break;
	}
      }
    }
    
    // If n is negative and a power of 2 its representation
    // starts with a 1 followed by all 0's. This is what
    // getUnsignedCode of its absolute value will return.
    // This was already calculated as w
    if (is_pow_of_2 == true) {
      return w;
    }
    BinaryCode x;
    // Does the 1's complement (swap all digits)
    for (BCIterator it = v.begin(); it != v.end(); ++it) {
      x.push_back(*it ? 0 : 1);
    }
    // Adds 1 to the 1s complement (2's complement)
    for (BCIterator it = x.end(); it != x.begin(); ) {
      --it;
      if (*it == 0) {
	*it = 1;
	return x;
      }
      else {
	*it = 0;
      }
    }
      return x;
  }
}
