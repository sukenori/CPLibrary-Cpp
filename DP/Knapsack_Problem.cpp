for(int i=0;i<N;i++)for(int j=W;j>=w[i];j--)
  dp[j]=max(dp[j],dp[j-w[i]]+v[i])
cout<<dp[W]<<endl;

#Unbounded
for(int i=0;i<N;i++)for(int j=w[i];j<=W;j++)
  dp[j]=max(dp[j],dp[j-w[i]]+v[i])
cout<<dp[W]<<endl;