class Solution {
public:
    bool isPalindrome(string s) {
    int first = 0, second = s.length() - 1;
		 int* R = &second;
 		int* L = &first;

    if (*L == *R)
		return true;

   while (*L < *R)
	  {
        if (isalpha(s[*L]))
            s[*L] = tolower(s[*L]);

        if (isalpha(s[*R]))
            s[*R] = tolower(s[*R]);

    
        if (!isalnum(s[*L])) 
				{
            while (!isalnum(s[*L]) && (*L < *R))
                (*L)++;
        }
        else if (!isalnum(s[*R]))
				 {
            while (!isalnum(s[*R]) && (*L < *R))
                (*R)--;
        }


        else if (s[*L] != s[*R])
           return false;
       
			  else
				{
            (*L)++;
            (*R)--;
        }
    }
		return true;
  }
};