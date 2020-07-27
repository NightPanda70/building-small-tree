#include <iostream>
#include "tree.h"


void nodeTest(){
  //single node test
  Node n1;
  Node n2(12,'b');
  n1.print();
  n2.print();

  std::cout << std::endl;

  std::cout << "this is the copy of node2" << std::endl;
  Node n3 = n2;
  n3.print();

Node* ptr = nullptr;
ptr = &n2;
  //node tree 
n1.left = ptr;

// this should print the node and also the children of this node
n1.print();

}

void testTree(){

} // end of test tree


int main() {
  std::cout << "Hello World!\n";
  nodeTest();
} // end main