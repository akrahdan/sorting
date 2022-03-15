#include <iostream>
#include <string>
using namespace std;

#include "isPalindrome.h"
#include "LinkedStack.h"
#include "LinkedQueue.h"

bool isPalindrome(const string& word){

  LinkedStack<char> stack;
  LinkedQueue<char> queue;

  for(char ch:word){
    stack.push(ch);
    queue.enqueue(ch);
  }

  while(!stack.isEmpty() && !queue.isEmpty()){
    if(stack.peek() != queue.peekFront()) return false;
    stack.pop();
    queue.dequeue();
  }
  
  return true;
}
