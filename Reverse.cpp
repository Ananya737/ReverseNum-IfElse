#include <iostream>
using namespace std;
int main() {
    int num=145;
    int digit1,digit2,digit3;
     
     digit1= num%10;
     num/=10;
 digit2= num%10;
     num/=10;
      digit3= num%10;
    
     cout<<digit1<<digit2<<digit3;
    return 0;
}
// Function banake.

#include <iostream>
using namespace std;
 int reverseNum(int abcdef){
       cout<<"Enter number that is to be reserved:";
       int num;
       cin>>num;
       int digit1;
       int digit2;
       int digit3;
       int digit4;
       int digit5;
       int digit6;
       digit1=num%10;
       num=num/10;
       digit2=num%10;
       num=num/10;
       digit3=num%10;
       num=num/10;
       digit4=num%10;
       num=num/10;
       digit5=num%10;
       num=num/10;
       digit6=num%10;
       cout<<digit1<<digit2<<digit3<<digit4<<digit5<<digit6;
       return 0;
   }
int main() {
  reverseNum(876654);

    return 0;
}