Q10- TIME CONVERSION
--------------------------------------------------------------------------------------------
string timeConversion(string s) {
    
    string res= s.substr(0,8);

    // return res;


    if(s[8] == 'P') { // times in PM; Have to add 12 if hr is not 12
        int hr= (s[0]-'0')*10 + (s[1]-'0');
        if(hr < 12){
            hr+=12;
        }
        res[0]= (hr/10) + '0';
        res[1]= (hr%10) + '0';
    }
    else { // times in AM; have to make 00 id hr is 12
        if(s[0]== '1' && s[1] == '2') {

            res[0]= '0';
            res[1]= '0';
        }
    }
    return res;


}
