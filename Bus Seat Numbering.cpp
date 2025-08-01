#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	std::cin >> t;
   while(t--){
       std::cin >> n;
       if(n>=1 && n<=10){
           std::cout << "Lower Double" << std::endl;
       }
       
       else if(n>=11 && n<=15){
           std::cout << "Lower Single" << std::endl;
       }
       else if(n>=12 && n<=25){
           std::cout << "Upper Double" << std::endl;
       }
       
       else if(n>=26 && n<=30){
           std::cout << "Upper Single" << std::endl;
       }
       
   }
}
