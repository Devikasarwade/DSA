class Solution {
public:
    int trap(vector<int>& height) {
    int water=0,left=0,right=height.size()-1,maxleft=0,maxright=0;
    while(left<right){
        if(height[left]<=height[right]){
            if(height[left]>=maxleft) maxleft=height[left];
            else water+=maxleft-height[left];
            left++;
        }
        else{
            if(height[right]>=maxright)maxright=height[right];
            else water+=maxright-height[right];
            right--;
        }}
        return water;
        
}
};
