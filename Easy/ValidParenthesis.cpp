class Solution {
public:
    bool isValid(string s) {
        std::string cp;

        for (char c : s) {
            if (c == '{' || c == '[' || c == '(') {
                cp.push_back(c);
            } else if (!cp.empty()) {
                switch(c) {
                case '}':
                    if (cp.back() == '{') {
                        cp.pop_back();
                    } else {
                        cp.push_back(c);
                    }
                    break;
                case ']':
                    if (cp.back() == '[') {
                        cp.pop_back();
                    } else {
                        cp.push_back(c);
                    }
                    break;
                case ')':
                    if (cp.back() == '(') {
                        cp.pop_back();
                    } else {
                        cp.push_back(c);
                    }
                    break;
                }
            } else {
                cp.push_back(c);
            }
        }
        return cp.empty();
    }
};