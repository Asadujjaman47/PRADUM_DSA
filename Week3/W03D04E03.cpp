// Allocate minimum number of pages:

class Solution {
    public:
    // Funtion to find minimum number of pages.
    int findPages(int arr[], int n, int m) {
        int start = arr[0], end=0, mid;
        if(m>n)
            return -1;
        
        for(int i=0; i<n; i++) {
            end = end + arr[i];
            if(start<arr[i])
                start = arr[i];
        }

        int ans;
        while (start <= end)
        {
            mid = (start+end)/2;
            
            int sum=0, count=1;
            for(int i=0; i<n; i++) {
                sum += arr[i];

                if(sum>mid) {
                    count++;
                    sum = arr[i];
                }
            }

            if(count <= m) {
                end = mid-1;
                ans = mid;
            }
            else 
                start = mid+1;
        }

        return ans;
    }
};