#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	int t,a,b,c,d;
	std::cin >> t;
	while(t--){
	    
	    std::cin >> a>>b>>c>>d;
	   int A=a+c;
	   int B=b+c;
	    
	   int C=b+d;
	   int D=a+d;
	    
	    int final_max = std::max(std::max(A, B), std::max(C, D));
	    std::cout << final_max << std::endl;
	    
	    
	    
	}

}
