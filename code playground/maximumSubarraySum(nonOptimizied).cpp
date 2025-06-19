#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    vector<int> soln;
    int sum=0;
    int plum;


    for (int i = 0; i < nums.size(); i++) {
        for (int j = nums.size() - 1; j >= 0; j--) {

            if (i <= j) {
                for (int k = i; k <= j; k++) {
                    sum = sum + nums[k];
                }
            }
            soln.push_back(sum);
            sum = 0;
        }
    }

    vector<int>newy(soln.size()-1,0);
    for(int i=0; i<soln.size(); i++) {
        newy[i]=soln[i];

    }
    
    plum = newy[0];
    for (int k = 0; k < newy.size(); k++) {
        if (plum < newy[k]) {

            plum = newy[k];

        }
    }

    return plum;
}
int main() {
    vector<int>newy= {-5,-2};
    cout<<maxSubArray(newy)<<endl;
}
