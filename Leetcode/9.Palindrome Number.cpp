bool isPalindrome(int x) {
        int length, n, m;
        length = 0;
        bool state = true;
        m = 0;
        vector<int> vemm;
        if (x > 0) {
            while (x > 0) {
                m = x % 10;

                x = x / 10;

                vemm.push_back(m);
            }
            for (int i : vemm) {
                cout << i << endl;
            }
            n = vemm.size();
            for (int i = 0; i <= n / 2; i++) {
                if (vemm[i] != vemm[n - i - 1]) {

                    state = false;
                    break;
                }
            }

            return state;
        } else if (x == 0) {
            return true;
        } else {
            return false;
        }
    }
