int strstr(string s, string x)
{
     int n = s.length();
     int m = x.length();
     int pos = 0;
     int subLo = 0;
     for(int i = 0 ; i < n; ){
         pos = i;
         while((i < n && subLo < m) && (s[i] == x[subLo])){
             i++; subLo++;
         }
         if(subLo == m) return i - subLo;
         else if(subLo == 0) i++;
         else {
             i = pos + 1;
             subLo = 0;
         }
     }
     return -1;
}
