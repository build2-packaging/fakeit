#include <iostream>
#include <string>

#include <fakeit/version.hpp>
// Support both include forms (for backwards compatibility)
#include <fakeit/fakeit.hpp>
#include <fakeit.hpp>

using namespace std;

struct some_interface
{
  virtual int foo(int) = 0;
  virtual int bar(string) = 0;
};

int main ()
{
  using namespace fakeit;

  // Instantiate a mock object.
  Mock<some_interface> mock;
  
  // Setup mock behavior.
  When(Method(mock,foo)).Return(1); // Method mock.foo will return 1 once.
  
  // Fetch the mock instance.
  some_interface &i = mock.get();
  
  // Will print "1". 
  cout << i.foo(0);

  return 0;
}
