char *encode(char *src)
{     
    int i = 0;
    string res = "";
    int count = 1;
    while(src[i]){
        if(src[i] == src[i + 1]){
            count++;
        } else{
            // cout<<count<<" ";
            res += src[i];
            res += count + '0';
            count = 1;
        }
        i++;
    }
    res += src[i];
    res += count + '0';
    int len = res.length();
    char *ch = new char[len+1];
    for(i=0; i < len; i++)
        ch[i] = res[i];
    ch[i]='\0';
    return ch;
}     
