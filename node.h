
class Node{
private:
  int number;
  char letter;
 

public:
  Node *right;
  Node *left;
  
//constuctor
Node(){
  number = 0;
  letter = 'a';
} // end of constuctor

//parmater constuctor
Node(int num, char let){
  number = num;
  letter = let;
}

//parmater constuctor
//Node(int num, char let, Node *rightptr, Node* leftptr){
  //number = num;
  //letter = let;
  //Node *right = rightptr;
 // Node *left = leftptr;
//}

//copy constuctor
Node(const Node &copy){
  number = copy.number;
  letter = copy.letter;
  left = nullptr;
  right = nullptr;
}

// method used to print
void print(){
  std::cout<< "Node ID: "<< number << " letter: "<<letter << std::endl;
  if (right != nullptr)
    std::cout<< "Right Node: " << right->getLet();
  if(left != nullptr)
    std::cout<< "Left Node: " << left->getNum() << std::endl;
}

// get the letter
char getLet(){
  return letter;
}

//get the number of the Node
int getNum(){
  return number;
}


};// end of Node