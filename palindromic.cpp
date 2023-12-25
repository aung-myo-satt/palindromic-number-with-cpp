#include <iostream>
using namespace std;

bool isPalindrome(int x) {
 //complete
 int*p=new int;
 *p=x;//original number
 int temp,rev=0;
while(x!=0){
 temp=x%10;
 rev=(rev*10)+temp;
 x=x/10;
}
if(*p==rev){
 return true;
}
else{
 return false;
}
}

int main() {
 int n;
 cin >>n;
 
 if(isPalindrome(n)) {
 cout <<n<<" is a palindrome";
 }
 else {
 cout << n<<" is NOT a palindrome";
 }
 return 0;
}