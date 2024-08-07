class Solution {
public:
    string removeDigit(string number, char digit) {
        string maxNumber = "";
    for (size_t i = 0; i < number.size(); ++i) {
        if (number[i] == digit) {
            // Create a new string with the current digit removed
            string temp = number.substr(0, i) + number.substr(i + 1);
            // Update the maximum number if the new string is larger
            if (temp >= maxNumber) {
                maxNumber = temp;
            }
        }
    }
    return maxNumber;
    }
};