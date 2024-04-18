vector<int>ans;
           int i=0,j=0,k=0;
           while(i<n1&&j<n2&&k<n3)
           {
               if(A[i]==B[j] && B[j]==C[k])
               {
                    if (ans.empty() || ans.back() != A[i])  // To check duplicate in vector
                {
                ans.push_back(A[i]);
                }
                   i++,j++,k++;
               }
               else if(A[i]<B[j])
               {
                   i++;
               }
               else if(B[j]<C[k])
               {
                   j++;
               }
               else{
                   k++;
               }
           }
           return ans;
