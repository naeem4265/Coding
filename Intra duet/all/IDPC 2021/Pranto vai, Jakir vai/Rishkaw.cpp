#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,w,i,j,ans=0;
	cin>>n>>w;
	vector<int>vec(n);
	for(i=0;i<n;i++)
	{
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end());
	j=n-1;
	i=0;
	while(i<=j)
	{
		if(vec[i]+vec[j] <= w)
		{
			i++;
			j--;
		}
		else
		{
			j--;
		}
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
