#include "sharedPtr.hpp"

int main() {
  struct Widget {
    size_t in;
    size_t out;
  };
  Widget widget1 = { 1, 2 };
  Widget widget2 = { 2, 1 };
  SharedPtr<Widget> a(&widget1);
  SharedPtr<Widget> b(&widget2);
  b.swapPtr(a);
  b.reset(&widget1);
  std::cout << a.use_count() << std::endl;
}