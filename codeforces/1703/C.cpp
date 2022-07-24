#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=0,m=0,x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        int arr[m];
        string str=" ";
        for(int j=0;j<m;j++)
            cin>>arr[j];

        for(int j=0;j<m;j++)
        {
            cin>>x>>str;
            int xx = arr[j];
            for(int z=0;z<x;z++ )
            {
                if(str[z]=='D')
                {
                    arr[j]++;
                }
                else
                {
                    arr[j]--;
                }
            }
            arr[j]=(arr[j] + 10) % 10;

            xx = arr[j];
            int z = 0;
        }
        for(int j=0;j<m;j++){
            cout<<arr[j]<<" ";
        }cout<<endl;
    }


    return 0;
}
