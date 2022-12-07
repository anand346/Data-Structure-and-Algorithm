    #include<cstdio>
    const int N=110;
    int n,a[N];
    int main()
    {
    	int t,i;
    	scanf("%d",&t);
    	while(t--)
    	{
    		scanf("%d",&n);
    		for(i=1;i<=n;i++){
                scanf("%d",&a[i]);
            }
            for(i=2;i<=n;++i){
                if(a[i]%a[1]){
                    break;
                }
            }
            puts(i<=n?"NO":"YES");
    	}
    	return 0;
    }