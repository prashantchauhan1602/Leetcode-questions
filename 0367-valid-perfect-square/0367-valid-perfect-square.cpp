class Solution {
public:
    bool isPerfectSquare(int num) {
        int num1 = num / 2 ;
       
            int start = 0 ;
            int end = num1 ;
        if(num == 1 || num == 4)
        {
            return true ;
        }
            while(start <= end)
            {
                long long int mid = start + (end - start) / 2 ;
                // cout << mid << " ";
                long long int sqr = mid * mid ;
                // cout << sqr << "    ";
                if(sqr == num)
                {
                    return true ;
                }
                if(sqr > num)
                {
                    end = mid - 1 ;
                }
                else{
                    // cout << "hii baby" ;
                    start = mid + 1 ;
                    // cout << start ;
                }
            }
        return false ;
    }
};