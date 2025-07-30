#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x,y;
	std::cin >> t;
	while(t--){
	    std::cin >> n>>x>>y;
	    
	    if (n*x>= y && y%x==0){
	        std::cout << "Yes" << std::endl;
	    }
	    else{
	        std::cout << "No" << std::endl;
	    }
	}

}
