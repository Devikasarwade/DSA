  if(n==1)return 0;
        if(arr[0]==0)return -1;
        int ans=0;
        int i=0;
        if(arr[0]>=n-1)return 1;
        while(i<n){
            int maxi=0;
            int nextstep=0;
            for(int j=1;j<=arr[i];j++){
                if(arr[i+j]>=n-1-(i+j)){
                    return ans+2;
                }
                if(arr[i+j]==0)continue;
                if(arr[i+j]-(arr[i]-j)>maxi){
                    maxi=arr[i+j]-(arr[i]-j);
                    nextstep=j;
                }
            }
            if(nextstep==0)return -1;
            i+=nextstep;
            ans++;
        }
