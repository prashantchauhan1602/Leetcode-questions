class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> ans ;
        int len = prices.size() ;
        // vector<int> ans ;
        stack<int> st ;
        int end = len - 1 ;
        // ans.push_back(-1) ;
        int result = 0 ;
        st.push(-1) ;

        while(end >= 0)
        {
            if(prices[end] < st.top())
            {
                ans.push_back(st.top()) ;
                // st.push(prices[end]);
                end-- ;
            }
            
            else{
                if(st.top() == -1)
                {
                    ans.push_back(st.top()) ;
                    st.push(prices[end]) ;
                    end-- ;
                }
                else{
                    st.pop() ;
                }
            }
        }
        reverse(ans.begin() , ans.end()) ;
        int index = 0 ;
        while(index != len)
        {
            if(ans[index] == -1)
            {
                index++ ;
            }
            else{
                int diff = ans[index] - prices[index] ;
                result = max(result , diff) ;
                index++ ;
            }
        }
        return result ;
    }
};