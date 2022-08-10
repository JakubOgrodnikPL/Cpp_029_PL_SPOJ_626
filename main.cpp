#include <iostream>
using namespace std;
int nos, nop, nocib, t, sum=0;
int main()
{
    cin>>nos;
    for (int i=0; i<nos; i++)
    {
        cin>>nop>>nocib;
        for (int i=0; i<nop; i++)
        {
            cin>>t;
            sum+=(86400/t);
        }
    if (sum%nocib==0) cout<<sum/nocib<<endl;
    else cout<<(sum/nocib)+1<<endl;
    sum=0;
    }
    return 0;
}
