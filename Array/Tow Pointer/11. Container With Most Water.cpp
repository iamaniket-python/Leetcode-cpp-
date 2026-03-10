#include<iostream>
#include<vector>
uisng namespace std;
        int left =0;
        int right =height.size() -1;
        int maxarea=0;

        while(left < right){
            int area= min(height[left],height[right]) *(right -left);
            maxarea=max(maxarea ,area);

            if(height[left]< height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxarea;
    }
};