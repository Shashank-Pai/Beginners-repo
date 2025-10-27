class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(heights[n-1]);
        ans[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int count=0;
            while(!st.empty() && st.top()<=heights[i]){
                st.pop();
                count++;
            }
            if(st.empty()) ans[i]=count;
            else ans[i]=count+1;
            st.push(heights[i]);
        }
        return ans;
    }
};
