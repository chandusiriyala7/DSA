#include<iostream>
using namespace  std;
bool palindrome(int i ,string &c)
{
  if( i >= c.size()/2) return true;
  if(c[i] != c[(c.size())-i-1])
  {
    return false;
  }
  return palindrome(i+1,c);
}
int main(){
    string c = "madam";
    bool result = palindrome(0,c);
    if(result == true){
        cout << "Given String is Palindrome" << " ";
    }else{
        cout << "Given String is not a Palindrome" << " ";
    }
    return 0 ;
}
