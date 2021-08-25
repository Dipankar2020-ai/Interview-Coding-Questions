print the pattern
->  Input:3
    Output:
    1
    1 8 1
    1 8 27 8 1


int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j*j*j<<" ";
        }
        for(int j=i;j>1;j--)
        {
            cout<<(j-1)*(j-1)*(j-1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}





