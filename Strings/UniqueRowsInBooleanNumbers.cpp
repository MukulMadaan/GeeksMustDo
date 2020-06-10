void printMat(int M[MAX][MAX],int row,int col)
{
    set<string> st;
    int k , j;
    for(j = 0;j < row; j++){
        string s;
        for(k = 0; k < col; k++){
            s += M[j][k] + '0';
            s += ' ';
        }
        
        if(st.find(s) == st.end()){
            st.insert(s);
            cout<<s<<"$";
        }
    }
}
