#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string addBinary(string& s1, string& s2) {
        int carry = 0;
        string result;
        int i = s1.length() - 1; // Pointer for s1
        int j = s2.length() - 1; // Pointer for s2

        // Traverse both strings from the end
        while (i >= 0 || j >= 0 || carry) {
            int bit1 = (i >= 0) ? s1[i--] - '0' : 0; // Get bit from s1 or 0 if exhausted
            int bit2 = (j >= 0) ? s2[j--] - '0' : 0; // Get bit from s2 or 0 if exhausted

            int sum = bit1 + bit2 + carry;
            carry = sum / 2;             // Update carry
            result.push_back((sum % 2) + '0'); // Append current bit to result
        }

        reverse(result.begin(), result.end()); // Reverse to correct order

        // Remove leading zeros from the result
        size_t start = result.find_first_not_of('0');
        if (start != string::npos) {
            return result.substr(start); // Return the string excluding leading zeros
        }

        return "0"; // In case the result is all zeros
    }
};
int main(){
    Solution s;
    string s1 = "0101", s2 = "0011";
    cout<<s.addBinary(s1,s2);
    return 0;

}