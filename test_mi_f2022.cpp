
#include "hw4part2_VirtualInheritance.h"
// #include "hw4part2_MultipleInheritance.h"

#include <iostream>

int
main(void)
{
  char buf[256];
  bzero(buf, 256);
  Work_Study Obj_WS;
  Work_Study *obj_ws_ptr = &Obj_WS;

  std::cout << ((Student *) obj_ws_ptr) << std::endl;
  std::cout << &(((Student *) obj_ws_ptr)->S1) << std::endl;

  sprintf(buf, "%p",((Student *) obj_ws_ptr));
  void *xyz_ptr;
  sscanf(buf, "%p", &xyz_ptr);
  std::cout << ((void *) *((long long *) xyz_ptr)) << std::endl;

  void *abc_ptr;
  abc_ptr = ((void *) *((long long *) xyz_ptr));
  std::cout << ((void *) *((long long *) abc_ptr)) << std::endl;

  void *def_ptr;
  def_ptr = ((void *) *((long long *) abc_ptr));
  std::cout << ((void *) *((long long *) def_ptr)) << std::endl;

  std::cout << (obj_ws_ptr) << std::endl;
  std::cout << ((Student *) obj_ws_ptr) << std::endl;
  std::cout << ((Account *) obj_ws_ptr) << std::endl;
  return 0;
}
