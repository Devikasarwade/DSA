#User function Template for python3

class Solution:
	def find_median(self, v):
	  v.sort()
      t=len(v)
      for i in range(t):
            if t%2==0:
                s=(v[t//2]+v[(t//2)-1])//2
                return s
            else:
                s=v[t//2]
                return s	# Code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		v = list(map(int,input().split())) 
		ob = Solution();
		ans = ob.find_median(v)
		print(ans)
# } Driver Code Ends
