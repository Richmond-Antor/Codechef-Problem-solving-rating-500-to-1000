#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
int t,a,b,c;
std::cin >> t;
while(t--){
    std::cin >> a>>b>>c;
    int largest = std::max(a, std::max(b, c));
        std::cout<< largest << std::endl;
    
    
}

}
