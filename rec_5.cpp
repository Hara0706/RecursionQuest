#include <iostream>
using namespace std;

void mul(int n, int i)
{
   if(5*i >= n) return;
   
   cout<<5*i<<" ";
   return mul(n, i+1);
}

int main() {
    int n; cin>>n;
    cout<<1<<" ";
    mul(n, 1);
    
	return 0;
}
