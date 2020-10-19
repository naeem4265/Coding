#include<bits/stdc++.h>
using namespace std;

class Sort
{
public:
    int Partition(int A[],int left,int right)
    {
        int i=left,j;
        for(j=left; j<=right; j++)
        {
            if(A[j]<=A[right])            //pivot =A[right]
            {
                swap(A[i],A[j]);
                i++;
            }
        }
        return max(i-1,left);
    }
    void QuickSort(int A[],int left,int right)
    {
        if(left==right) return ;
        int mid = Partition(A,left,right);   //cout <<mid<<endl;
        QuickSort(A,left,max(mid-1,left));
        QuickSort(A,min(mid+1,right),right);
    }
};
int  main()
{
    Sort ob;
    int n,i;
    cin >> n;
    int A[n+2];
    for(i=0; i<n; i++) cin >> A[i];
    ob.QuickSort(A,0,n-1);
    for(i=0; i<n; i++)
        cout <<A[i]<<" ";
    cout <<endl;
    return 0;
}

