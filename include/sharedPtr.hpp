// Copyright 2021 Your Name <your_email>

#ifndef INCLUDE_SHAREDPTR_HPP_
#define INCLUDE_SHAREDPTR_HPP_

#include <stdexcept>
#include <atomic>
#include <vector>
#include <iostream>

auto example() -> void;

template <typename T>
class SharedPtr {
 public:
  SharedPtr();
  SharedPtr(T* pointer);
  SharedPtr(const SharedPtr& r);
  SharedPtr(SharedPtr&& r);
  ~SharedPtr();
  auto operator=(const SharedPtr& r) -> SharedPtr&;
  auto operator=(SharedPtr&& r) -> SharedPtr&;

  // проверяет, указывает ли указатель на объект
  operator bool() const;
  auto operator*() const -> T&;
  auto operator->() const -> T*;

  auto get() -> T*;
  void reset();
  void reset(T* ptr);
  void swap(SharedPtr& r);
  // возвращает количество объектов SharedPtr, которые ссылаются на тот же управляемый объект
  auto use_count() const -> size_t;

 private:
  T* ptr;
  std::atomic_uint* counter;
};

#endif // INCLUDE_SHAREDPTR_HPP_
