
#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int> Sieve(N+1,1);
        Sieve[0]=0;
        Sieve[1]=0;
        for(int i=2;i*i<=N;i++)
        {
            if(Sieve[i]==1)
            {
                for(int j=i*i;j<=N;j+=i)
                {
                    Sieve[j]=0;
                }
            }
        }
        vector<int> pb;
        for(int i=2;i<=N;i++)
        {
            if(Sieve[i]==1)
            {
                pb.push_back(i);   
            }
        }
        return pb;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
