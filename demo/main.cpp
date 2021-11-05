#include "sharedPtr.hpp"

struct Widget {
  size_t size;
};

int main() {
  Widget widget = { 0 };
  SharedPtr<Widget> a(&widget);
}