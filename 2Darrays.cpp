#include<iostream>
using namespace std;
void getarray(int a[10][10],int x,int y);
int main()
{
    int a[10][10],m,n,i,j;
    cout<<"Enter the value of m and n : ";
    cin>>m>>n;
    getarray(a,m,n);
    cout<<endl;
    cout<<"You have entered following matrix"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
void getarray(int a[10][10],int x,int y)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }
}

