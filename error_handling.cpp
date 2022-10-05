// Assertions are used for conditions that NEVER occur. C++ does not support assertion statements natively, but it can be implemented with Macros. 
#define ASSERT(condition,message) {
  if(!(condition)) {
    LogError("Assertion failed: ",#condition,message);
      exit(EXIT_FAILURE);
  }


}

//Error catching code is used for conditions we expect to occur.
#include <stdexcept>
#include <limits>
void f1(int num) {
  if(num > std::numeric_limits<char>::max()) {
    throw invalid_argument("input parameter num is too large!")
  }
}
int main() {
  try {
    f1(256) //this will throw an error.
  }
  catch(invalid_argument& e) {
    cerr << e.what() << endl;
    return -1;
  }
}
