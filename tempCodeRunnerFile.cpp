        int j = 0;
        int maxLen = 1;
        for(int i = 1;i<n;i++)
        {
            if(s[i-1] != s[i])
            {
                j++;
            }

            maxLen = max(maxLen,i-j+1);
        }
        cout<<maxLen<<nl;
		