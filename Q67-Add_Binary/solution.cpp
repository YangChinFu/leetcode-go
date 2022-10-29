class Solution {
public:
    string addBinary(string a, string b) {
		int carry = 0;
		std::string ans = "";
		int i = a.size() - 1, j = b.size() - 1;

		while (i >= 0 || j >= 0)
		{
			int sum = carry;
			if (i >= 0) sum += a[i--] - '0';
			if (j >= 0) sum += b[j--] - '0';
			carry = sum >= 2 ? 1 : 0;

			ans += (sum%2)+'0';
		}

		if (carry)
		{
			ans += '1';
		}
		reverse(ans.begin(), ans.end());

		return ans;
    }
};