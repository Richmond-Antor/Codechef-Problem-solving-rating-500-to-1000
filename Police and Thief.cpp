#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y;
	std::cin >> t;
	while(t--){
	    std::cin >> x>>y;
	    if(x>y){
	        std::cout << x-y << std::endl;
	    }
	    else{
	        std::cout << y-x << std::endl;
	    }
	}

}
