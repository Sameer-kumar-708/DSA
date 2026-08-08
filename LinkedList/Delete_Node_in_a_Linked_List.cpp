#include<iostream>
using namespace std;

class NODE{

  public:
  int data;
  NODE *next;

  NODE(int d){

    data = d;
    next = NULL;
  }
};

int main(){

  int arr[] = {1,2,3,4,5,6,7};
  NODE* head = NULL;NODE* tail = NULL;

  for(int i=0;i<7;i++){

    if(!head){

      head = new NODE(arr[0]);
      tail = head;
    }else{

      tail->next = new NODE(arr[i]);
      tail = tail->next;

    }

  }





  return 0;
}