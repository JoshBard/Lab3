#include <iostream>

using namespace std;

int main(){
  int limit, count = 0;
  while (limit >= 0){
  do {
  cout << "How tall of a ladder do you need? ";
  cin >> limit;
  if (limit == 0){
    cout << "The height can't be zero" << endl;}
  if (limit < 0){
      cout << "That is invalid" << endl;
      return 0;}}
  while (limit <= 0);
  while (count < limit){
    if(count%2){
      cout << "######"  << endl;}
    else{
      cout << "#  #" << endl;}
    count += 1;
  }}}
